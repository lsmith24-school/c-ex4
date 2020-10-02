#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
/*
	Purpose: To work on cout statements 
	Author: Lauren Smith
*/

int main()
{
	cout << fixed; // display real numbers
	cout << setprecision(3);// display real numbers to 3 decimail place 
	cout << "Hello World" << endl;

	// displaying value of variables 
	int numb = 5;
	cout << "numb is " << numb << endl;

	// output expression it evaluates first then prints
	cout << "numb is " << numb + 2 << endl;

	//output escape characters 
	cout << "numb is \t" << numb << "\n";

	//large numbers 
	double amt = 123456.3334 * 9935534.3;
	cout << "amt is  " << amt << endl;
	cout  << amt << endl;
	cout << setprecision(2);
	double value = 37.543;
	cout << "value is " << value << endl;
	
	// learnin setw
	string name = "Lauren";
	int studentNum = 4212193;
	double gpa = 4.0;

	cout << "Name :" << left << setw(10) << name << endl;
	cout << "|" <<setw(20) << studentNum << "|" << endl;
	cout << right<< "|" << setw(40) << studentNum << "|" << endl;

	cout << "*************************************************************"<<endl;
	cout << left << setw(10) << "Name "
		<< right << setw(10) << "StudentNum"
		<< setw(10) << "GPA" << endl;

	cout << left << setw(10) << name
		<< right << setw(10) << studentNum
		<< setw(10) << gpa << endl;
	cout << "*************************************************************" <<endl;
	system("pause");
}