#include <iostream>
using namespace std;
class clsPerson
{
private:
	int _ID;
	string _FirstName;
	string _LastName;
	string _Email;
	string _Phone;
public:
	clsPerson(int ID, string FirstName, string LastName, string Email, string Phone)
	{
		_FirstName = FirstName;
		_LastName = LastName;
		_Email = Email;
		_Phone = Phone;
	}
	//read only
	int ID()
	{
		return _ID;
	}
	void setFirstName(string fname)
	{
		_FirstName = fname;
	}
	string FirstName()
	{
		return _FirstName;
	}

	void setLastName(string Lname)
	{
		_LastName = Lname;
	}
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
	
	//property Get
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
};
class clsEmployee : public clsPerson
{
private:
	string _Title;
	string _Department;
	float _Salary;
public:
	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, float Salary, string Department)
		: clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Salary = Salary;
		_Department = Department;
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
	void setSalary(float Salary)
	{
		_Salary = Salary;
	}
	//Property Get
	float Salary()
	{
		return _Salary;
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
class clsDeveloper : public clsEmployee
{
private:
	string _ProgrammingLanguage;
public:
	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone, string Title,
		float Salary, string Department, string ProgrammingLanguage) :
		clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Salary, Department)
	{
		_ProgrammingLanguage = ProgrammingLanguage;
	}
	//Property Set
	void setProgrammingLanguage(string programmingLanguage)
	{
		_ProgrammingLanguage = programmingLanguage;
	}
	//Property Get
	string ProgrammingLanguage()
	{
		return _ProgrammingLanguage;
	}
	void Print()
	{
		//clsAddress::Print();
		cout << "\nInfo";
		cout << "\n========================";
		cout << "\n------------------------";
		cout << "\nID        : " << ID() << endl;
		cout << "First Name: " << FirstName() << endl;
		cout << "Last Name : " << LastName() << endl;
		cout << "Full Nam  : " << FullName() << endl;
		cout << "Email     : " << Email() << endl;
		cout << "Title     : " << Title() << endl;
		cout << "Salary    : " << Salary() << endl;
		cout << "Department: " << Department() << endl;
		cout << "Progr.Lang: " << _ProgrammingLanguage << endl;
		cout << "========================\n";
		cout << "------------------------\n";
	}
};
int main()
{
	clsDeveloper Developer1(10, "BIlal", "Mohammed", "Bilo@gmail.com", "0918281", "Backend Developer", 5500, "CSE", "C++");
	Developer1.Print();
	Developer1.sendEmail("Hi", "How are you");
	Developer1.sendSMS("Hi Developer");
	return 0;
}