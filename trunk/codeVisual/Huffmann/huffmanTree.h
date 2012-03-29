#ifndef __HUFMANN_TREE__
#define __HUFMANN_TREE__

#define SYMBOL_TYPE int
#define BITS 8

#include <QObject>

class HuffmannNode : public QObject
{
	Q_OBJECT

	int _value;
	int _weigth;
	bool _leaf;
	HuffmannNode * _parent;
	HuffmannNode * _left;
	HuffmannNode * _right;
	HuffmannNode * _next;

public:
	HuffmannNode();
	~HuffmannNode();
	HuffmannNode * Left() const;
	HuffmannNode * Right() const;
	HuffmannNode * Next() const;
	HuffmannNode * Parent();
	int IncreaseWeight();
	int Weight()const;
	bool IsLeaf()const;
	void Split( HuffmannNode *_leaves );
	void Swap( HuffmannNode * node );
	int & Value();
	void SetValue(SYMBOL_TYPE val);
};
class HuffmannTree : public QObject
{
	Q_OBJECT

	int _size;
	int _bufferSize;
	HuffmannNode ** _blockLeaders;
	HuffmannNode ** _leaves;
	int _maxDepth;
	int _symbolLen;
	HuffmannNode * _root;
	//FILE * _source;
private:
	void UpdateTreeVitter( HuffmannNode * node );
	void AddToBuffer( int pos, char * buffer, int add );
	void Encode(HuffmannNode * node, char * buffer, int &offset);
	void Clear( HuffmannNode * root );

signals:
		void Encoded();
		void RefillBuffer();
public:
	/**\brief constructor */
	HuffmannTree();
	/** \brief sets buffer size */
	void SetBufferSize(int size);
#if ENABLE_FILE_SOURCE
	void SetFileSource(const char * name);
#endif	
	void SetMaxSymbol(SYMBOL_TYPE maxSymbol);
	bool Encode(SYMBOL_TYPE symbol, char * buffer, int &offset);
	bool Decode( char * buffer, int &offset, int & value );
	int GetCodeLength(SYMBOL_TYPE symbol);
	SYMBOL_TYPE DecodeSymbol(const char * buffer, int& offset);
	void WriteRawSymbol( SYMBOL_TYPE symbol, char * buffer, int & offset );
	SYMBOL_TYPE ReadRawSymbol(char * buffer, int & offset);
	~HuffmannTree();
};
#endif