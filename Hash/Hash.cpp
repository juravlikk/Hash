#include "stdafx.h"
#include "HashMap.cpp"
#include "Data.h"
#include <fstream>

void Test()
{
	ifstream in("input.txt");
	int MapSize;
	in >> MapSize;
	HashMap<Data> *m = new HashMap<Data>(MapSize);
	Data d;
	while (!in.eof())
	{
		in >> d;
		m->Add(d, d.Phone);
	}
	cout << "Test!" << endl << endl;
	m->Print("Original list");
	m->Delete(888230);
	m->Delete(62499724);
	m->Print("After deleting keys: 888230 and 62499724");
	Data dat = Data(442342, "Mike", "Shugar", "dajkljkda 030 jdjk 2", "<><><>");
	m->Add(dat, dat.Phone);
	m->Print("After adding key: 442342");
	cout << "Find item 442342:" << endl;
	Node<Data>* p = m->Find(442342);
	if (p) cout << p->d << endl;
	cout << "Find item 442321:" << endl;
	p = m->Find(442321);
	if (p) cout << p->d << endl;
	delete m;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Test();
	int HashMapSize;
	int Type = 0;
	int key;
	Data d;

	cout << "Enter size of the hash map: ";
	cin >> HashMapSize;
	if (HashMapSize <= 0) return 0;
	HashMap<Data>* m = new HashMap<Data>(HashMapSize);
	while (Type!=5)
	{
		cout << "1: Add " << " 2: Delete " << " 3: Find " << " 4: Print " << " 5: Exit" << endl;
		cin >> Type;
		switch (Type)
		{
		case 1:
			{
				cin >> d;
				cout << endl;
				m->Add(d, d.Phone);
				break;
			}
		case 2:
			{			
				cout << "Enter key: ";
				cin >> key;
				cout << endl;
				m->Delete(key);
				break;
			}
		case 3:
			{
				cout << "Enter key: ";
				cin >> key;
				cout << endl;
				Node<Data>* p = m->Find(key);
				if (p) cout << p->d << endl;
				break;
			}
		case 4:
			{
				m->Print("List");
				break;
			}
		case 5:
			{
				delete m;
				return 0;
			}
		default:
			{
				cout << "Wrong Type! " << endl;
				Type = 0;
			}
		}
	}
}