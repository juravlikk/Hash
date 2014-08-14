#include "Node.h"
#pragma once

template <class Data>
class List
{
	Node<Data> *pbeg;
	Node<Data> *pend;
	int Size;

public:
	List<Data>();
	~List<Data>();

	bool Add (Data d, int key);
	Node<Data>* Find (int key);
	bool Delete(int key);
	void Print();
};
