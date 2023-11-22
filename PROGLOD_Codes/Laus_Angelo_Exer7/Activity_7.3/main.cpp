// 7.3 Call by value.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

//function declarations

void Display(char name[20], int);


int main()
{
	char ans;
	char name[20];
	int age;
	do
	{
		cout << "\nPlease enter your name: "; cin >> name; cin.ignore();
		cout << "\nPlease enter your age: "; cin >> age; cin.ignore();
		Display(name, age);
		

		cout << "\n\nDo you want another [y/n]? "; cin >> ans; cin.ignore();
		if ((ans != 'y') &&
			(ans != 'Y') &&
			(ans != 'n') &&
			(ans != 'N'))
			cout << "\n\tInvalid Input\n";

	} while ((ans != 'y') &&
		(ans != 'Y') &&
		(ans != 'n') &&
		(ans != 'N'));
	
	return 0;
}

void Display(char name[20], int age)
{
	cout << "\n\n\nYou entered a name of: " << name;
	cout << "\nYour age is : " << age;
}
