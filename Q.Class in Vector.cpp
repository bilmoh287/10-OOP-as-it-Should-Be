//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud
#include<iostream>
#include<vector>
using namespace std;
class clsA
{
public:
	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};
int main()
{
	// it is paranetriezed vector obj but we dont have to do V1.() cos it is vector we do it in poushback
	vector <clsA> v1;
	short NumberOfObjects = 5;
	// inserting object at the end of vector
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1.push_back(clsA(i));
	}
	// printing object content
	for (int i = 0; i < NumberOfObjects; i++)
	{
		v1[i].Print();
	}
	// here is what am saying
	clsA Koko(7);
	Koko.Print();
	system("pause>0");
}


//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud
#include<iostream>
#include<vector>
using namespace std;
class clsA
{
public:
	// dummy constructor
	clsA() {}
	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};

int main()
{
	short NumberOfObjects = 5;
	// allocating dynamic array
	// of Size NumberOfObjects using new keyword
	clsA* arrA = new clsA[NumberOfObjects];
	// calling constructor
	// for each index of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i] = clsA(i);
	}
	// printing contents of array
	for (int i = 0; i < NumberOfObjects; i++) {
		arrA[i].Print();
	}
	return 0;
	system("pause>0");
}

//ProgrammingAdivces.com
//Mohammed Abu-Hadhoud

#include<iostream>
#include<vector>
using namespace std;
class clsA
{
public:
	//Parametarized Constructor
	clsA(int value)
	{
		x = value;
	}
	int x;
	void Print()
	{
		cout << "The value of x=" << x << endl;
	}
};
int main()
{
	// Initializing 3 array Objects with function calls of
	// parameterized constructor as elements of that array
	clsA obj[] = { clsA(10), clsA(20), clsA(30) };
	// using print method for each of three elements.
	for (int i = 0; i < 3; i++) {
		obj[i].Print();
	}
	return 0;
	system("pause>0");
}