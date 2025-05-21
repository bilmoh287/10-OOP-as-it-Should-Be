#include <iostream>
using namespace std;
class clsPerson
{
private:
	//only accessable inside this calass
	int _ID = 10;
	string _FirstName;
	string _LastName;

public:

	void setID(int n)
	{
		_ID = n;
	}
	int GetID()
	{
		return _ID;
	}
	void setFirstName(string s)
	{
		_FirstName = s;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	void setLastName(string s)
	{
		_LastName = s;
	}

	string LastName()
	{
		return _LastName;
	}

	__declspec(property(get = GetFirstName, put = setFirstName)) string FirstName;
};

int main()
{
	clsPerson Person1;
	Person1.FirstName = "Bilal";
	Person1.setLastName("Mohammed");

	cout << "Person1 ID : " << Person1.GetID() << endl;
	cout << "Person1 FirstName : " << Person1.FirstName << endl;
	cout << "Person1 LastName : " << Person1.LastName();
}