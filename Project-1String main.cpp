#include <iostream>
#include <string>
#include "clsString.h"
using namespace std;
int main()
{
	clsString String1;
	clsString String2("Mohammed Bilal Abafita");
	String1.Value = "Ali Ahmed";
	cout << "String1 = " << String1.Value << endl;
	cout << "String2 = " << String2.Value << endl;
	cout << "Number of words: " << String1.CountWords() << endl;
	cout << "Number of words: "
		<< String1.CountWords("Fadi ahmed rateb omer") << endl;
	cout << "Number of words: " <<
		clsString::CountWords("Mohammed Saqer Abu-Hadhoud");
	cout << "\nAfter lowering all string = " << clsString::LowerAllString("Bilal HI@IJSJI@");
	String2.Words();
	cout << "First letters = " << String2.FirstLetters() << endl;

	cout << String2.InverString() << endl;
	cout << String2.CountCapitalLetter() << endl;
	cout << String2.CountSpecificLette('a');

	system("pause>0");
	return 0;
};