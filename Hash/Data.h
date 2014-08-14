#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Data
{
public:
	int Phone;
	string FirstName;
	string LastName;
	string Address;
	string Comments;
	Data()
	{
		Phone = -1;
		FirstName = "";
		LastName = "";
		Address = "";
		Comments = "";
	}
	Data(int aPhone, string aFirstName, string aLastName, string aAddress, string aComments)
	{
		Phone = aPhone;
		FirstName = aFirstName;
		LastName = aLastName;
		Address = aAddress;
		Comments = aComments;
	}
	void operator = (const Data& d)
	{
		Phone = d.Phone;
		FirstName = d.FirstName;
		LastName = d.LastName;
		Address = d.Address;
		Comments = d.Comments;
	}
	bool operator == (const Data& d)
	{
		if ((d.Phone == Phone) & (d.Address == Address) & (d.Comments == Comments) & (d.FirstName == FirstName) & (d.LastName == LastName)) return true;
		return false;
	}
	friend ostream& operator << (ostream& out, Data& d)
	{
		return out << "Phone: " << d.Phone << endl << "First Name: " << d.FirstName << endl << "Last Name: " << d.LastName << endl << "Address: " << d.Address << endl << "Comments: " << d.Comments << endl;
	}
	friend ifstream& operator >> (ifstream& in, Data& d)
	{
		char FN[256];
		char LN[256];
		char AD[256];
		char CO[256];
		in >> d.Phone;
		in.getline(FN, 256);
		in.getline(FN, 256);
		in.getline(LN, 256);
		in.getline(AD, 256);
		in.getline(CO, 256);
		d.FirstName = string(FN);
		d.LastName = string(LN);
		d.Address = string(AD);
		d.Comments = string(CO);
		return in;
	}
	friend istream& operator >> (istream& in, Data& d)
	{
		char FN[256];
		char LN[256];
		char AD[256];
		char CO[256];
		cout << "Enter Phone: ";
		in >> d.Phone;
		cout << "Enter First Name: ";
		in.getline(FN, 256);
		in.getline(FN, 256);
		cout << "Enter Last Name: ";
		in.getline(LN, 256);
		cout << "Enter Address: ";
		in.getline(AD, 256);
		cout << "Enter comments: ";
		in.getline(CO, 256);
		d.FirstName = string(FN);
		d.LastName = string(LN);
		d.Address = string(AD);
		d.Comments = string(CO);
		return in;
	}
};