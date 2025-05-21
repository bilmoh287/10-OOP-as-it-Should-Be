#include <iostream>
using namespace std;
class clsAddress
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _FullName;
	string _Email;
	string _Phone;
public:
	clsAddress(int ID, string Fname, string Lname, string FullName, string Email, string Phone)
	{
		_ID = ID;
		_FirstName = Fname;
		_LastName = Lname;
		_FullName = FullName;
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
		cout << "\n\n------------------------";
		cout << "\nID       : " << _ID << endl;
		cout << "First Name: " << _FirstName << endl;
		cout << "Last Name : " << _LastName << endl;
		cout << "Full Nam  : " << _FullName << endl;
		cout << "Email     : " << _Email << endl;
		cout << "Phone     : " << _Phone << endl;
		cout << "------------------------\n";

	}
};
int main()
{
	clsAddress Person1(10, "Bilal", "Mohammed", "Bilal Mohammed", "bilmoh@gmail.com", "0917109951");
	Person1.Print();
	Person1.sendEmail("Hi", "How are you");
	Person1.sendSMS("How are you");
	system("pause>0");
	return 0;
}