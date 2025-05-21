#include <iostream>
using namespace std;
class clsAddress
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsAddress(int ID, string Fname, string Lname, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = Fname;
		_LastName = Lname;
		_Email = Email;
		_Phone = Phone;
	}
	void sendEmail(string subject, string body)
	{
		cout << "\nthe following message is sent successfully to email : " << _Email << endl;
		cout << "Subject: " + subject << endl;
		cout << "BOdy: " + body << endl;
	}
	void sendSMS(string txt)
	{
		cout << "\nthe following message is sent successfully to phone : " << _Phone << endl;
		cout << txt << endl;
	}
	//Read Only Property
	int ID()
	{
		return _ID;
	}
	//Property Set
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	//Property Get
	string FirstName()
	{
		return _FirstName;
	}
	//Property Set
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	//Property Get
	string LastName()
	{
		return _LastName;
	}
	//Property Set
	void setEmail(string Email)
	{
		_Email = Email;
	}
	//Property Get
	string Email()
	{
		return _Email;
	}
	//Property Set
	void setPhone(string Phone)
	{
		_Phone = Phone;
	}
	//Property Get
	string Phone()
	{
		return _Phone;
	}
	string FullName()
	{
		return _FirstName + " " + _LastName;
	}
	void Print()
	{
		cout << "\nInfo";
		cout << "\n------------------------";
		cout << "\nID        : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Nam  : " << FullName() << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "------------------------\n";

	}
};
class clsemployee : public clsAddress
{
private:
	string _Title;
	string _Department;
	float _Salary;
public:
	clsemployee(int ID, string Fname, string Lname, string Email, string Phone, string Title, float Salary, string Department) :
		clsAddress(ID, Fname, Lname, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	//Property Set
	void setTitle(string Title)
	{
		_Title = Title;
	}
	//Property Get
	string Title()
	{
		return _Title;
	}
	//Property Set
	void setDepartment(string Department)
	{
		_Department = Department;
	}
	//Property Get
	string Department()
	{
		return _Department;
	}
	//Property Set
	void setSalary(float Salary)
	{
		_Salary = Salary;
	}
	//Property Get
	float Salary()
	{
		return _Salary;
	}
	void Print()
	{
		//clsAddress::Print();
		cout << "\nInfo";
		cout << "\n------------------------";
		cout << "\nID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last Name : " << LastName() << endl;
		cout << "Full Nam  : " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "Department: " << Department() << endl;
		cout << "------------------------\n";

	}
};
int main()
{
	clsemployee employee1(10, "BIlal", "Mohammed", "Bilo@gmail.com", "0918281", "Backend Developer", 5500, "CSE");
	employee1.Print();
	cout << "\n" << employee1.Title() << endl;
	cout << employee1.Salary() << endl;
	cout << employee1.Department() << endl;
	system("pause>0");
	return 0;
}