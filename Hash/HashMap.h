#include "List.cpp"
#include <string>

#pragma once

using namespace std;

template <class Data>
class HashMap
{
	int MapSize;
public:
	HashMap(int Size);
	HashMap();
	~HashMap();
	List<Data>* (*Map);
	int HF(int key);
	void Add (Data d, int key);
	Node<Data>* Find (int key);
	bool Delete(int key);
	void Print(string s);
};
