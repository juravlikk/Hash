#pragma once

template <class Data>
class Node
{
public:
	int key;
	Data d;
	Node<Data> *next;
	Node<Data> *prev;
	Node<Data>(Data dat = 0, int k = 0)
	{
		key = k;
		d = dat;
		next = NULL;
		prev = NULL;
	}
};