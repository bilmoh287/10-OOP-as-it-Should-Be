#include<iostream>
using namespace std;
class clsA
{
	struct stAdress
	{
		string Adress;
		string City;
		string Country;
	};
public:
	string fullname;
	stAdress Adress;
	clsA()
	{
		fullname = "Bilal Mohammed";
		Adress.Adress = "Bole street";
		Adress.City = "Adama";
		Adress.Country = "Ethiopia";
	}

};

int main()
{
	clsA A1;
	cout << A1.Adress.Adress << endl;
	// cout << MySum(A1);
	system("pause>0");
	return 0;
};