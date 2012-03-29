#include "huffmanTree.h"
#include "leakDebug.h"

HuffmannNode::HuffmannNode():_leaf(true),_weigth(0),_left(NULL),_right(NULL),_next(NULL),_parent(NULL)
{}

HuffmannNode * HuffmannNode::Left() const
{
	return _left;
}

HuffmannNode * HuffmannNode::Right() const
{
	return _right;
}

HuffmannNode * HuffmannNode::Next() const
{
	return _next;
}

int HuffmannNode::IncreaseWeight()
{
	int ret = _weigth;
	_weigth++;
	return ret;
}

bool HuffmannNode::IsLeaf() const
{
	return _leaf;
}

HuffmannNode::~HuffmannNode(){}

void HuffmannNode::Split( HuffmannNode * leaf )
{
	_leaf = false;
	_right = new HuffmannNode();
	_right->IncreaseWeight();
	_leaf = leaf;
	leaf->_parent = _right->_parent = this;
	_right->_next = _left;
	_left->_next = this;
	IncreaseWeight();
}

HuffmannNode * HuffmannNode::Parent()
{
	return _parent;
}

int HuffmannNode::Weight() const
{
	return _weigth;
}

void HuffmannNode::Swap( HuffmannNode * node )
{
	HuffmannNode * temp;
	temp = _parent;
	_parent = node->_parent;
	node->_parent = temp;

	temp = _next;
	_next = node->_next;
	node->_next = temp;
}

int & HuffmannNode::Value()
{
	return _value;
}
void HuffmannNode::SetValue(SYMBOL_TYPE val)
{
	_value = val;
}

HuffmannTree::HuffmannTree():_leaves(NULL),_blockLeaders(NULL),_maxDepth(0),
_size(0),_symbolLen(0)//,_source(NULL)
{
}

void HuffmannTree::SetMaxSymbol( SYMBOL_TYPE maxSymbol )
{
	_size = maxSymbol;
	_leaves = new HuffmannNode*[maxSymbol+1];
	memcpy(_leaves, 0, maxSymbol+1);
	_blockLeaders = new HuffmannNode*[maxSymbol+1];
	memcpy(_blockLeaders,0,maxSymbol+1);
	_leaves[_size] = new HuffmannNode();
	_symbolLen = 1;
	int upperBoundary = 1;
	while (upperBoundary <= maxSymbol)
	{
		upperBoundary*=2;
		_symbolLen++;
	}
}

bool HuffmannTree::Encode( SYMBOL_TYPE symbol, char * buffer, int &offset )
{
	int len;
	if (!_leaves[symbol])
		len = 1+_symbolLen; //1 for NILL, one for newly created node, length of last node
	else
		len = GetCodeLength(symbol);
	if ((offset + len) < _bufferSize)
	{
		emit RefillBuffer();
		return false;
	}
	if (!_leaves[symbol])
	{
		Encode(_leaves[_size], buffer, offset);
		_leaves[symbol] = new HuffmannNode();
		_leaves[symbol]->SetValue(symbol);
		_leaves[_size]->Split(_leaves[symbol]);
		_leaves[_size] = _leaves[_size]->Right();

		UpdateTreeVitter(_leaves[symbol]->Parent()); //TODO check
		WriteRawSymbol( symbol, buffer, offset);
	}
	else
	{
		Encode(_leaves[symbol],buffer,offset);
		UpdateTreeVitter(_leaves[symbol]);
	}
	emit Encoded();
	return true;//encoded
}

void HuffmannTree::Encode( HuffmannNode * node, char * buffer, int &offset )
{
	HuffmannNode * n = node;
	while(n)
	{
		if (n->Parent()->Right() == n)
			AddToBuffer(offset/8,buffer,1);
		else
			AddToBuffer(offset/8,buffer,0);
		offset++;
		n = n->Parent();
	}
}

void HuffmannTree::SetBufferSize( int size )
{
	_bufferSize = size;
}

void HuffmannTree::WriteRawSymbol( SYMBOL_TYPE symbol, char * buffer, int & offset )
{
	for ( int i = _symbolLen -1; i>=0 ; i++)
	{
		AddToBuffer(offset/8, buffer, symbol&1);
		offset++;
		symbol = symbol >> 1;
	}
}

void HuffmannTree::AddToBuffer( int pos, char * buffer, int add )
{
	buffer[pos]*=2;
	buffer[pos] |=add;
}

HuffmannTree::~HuffmannTree()
{
	HuffmannNode * root = _leaves[_size];
	while(root->Parent())
		root = root->Parent();
	// delete while tree
	Clear(root);
#if ENABLE_SOURCE
	if (_source)
		fclose(_source);
#endif
}

void HuffmannTree::Clear( HuffmannNode * root )
{
	if (!root)
		return;
	Clear( root->Left() );
	Clear( root->Right() );
	delete root;
}

void HuffmannTree::UpdateTreeVitter( HuffmannNode * node )
{
	while(node)
	{
		node->IncreaseWeight();
		HuffmannNode * blockNode = node->Next();
		while(blockNode && (blockNode->Weight() <= node->Weight()) )
			blockNode = blockNode->Next();
		if ( blockNode && (blockNode != node->Parent()))
		{
			blockNode->Swap(node);
		}
		node = node->Parent();
		continue;
	}
	if (_root->Weight() > node->Weight())
		_root = node;
}

int HuffmannTree::GetCodeLength( SYMBOL_TYPE symbol )
{
	int ret = 0;
	HuffmannNode * node = _leaves[symbol];
	while(node->Parent())
	{
		ret++;
		node = node->Parent();
	}
	return ret;
}

bool HuffmannTree::Decode( char * buffer, int &offset, int & value )
{
	HuffmannNode * iter = _root;
	while (!iter->IsLeaf())
	{
		int pos = offset/8;
		if (buffer[pos] &1)
			iter = iter->Left();
		else
			iter = iter->Right();
		buffer[pos]/=2 ;
		offset++;
		pos = offset/8;
		if (offset == _size)
			return false;
	}
	value = iter->Value();
	return true;
}
// TODO this won't be used now, but could be in the future
#if ENABLE_FILE_SOURCE
void HuffmannTree::SetFileSource( const char * name )
{
	_source = fopen(name,"r");
}
#endif