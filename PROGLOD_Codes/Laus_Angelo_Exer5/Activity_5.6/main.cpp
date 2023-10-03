// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	char S;
	cout << "\nThis is a calculator\n";
	cout << "\nPlease enter 1st number: ";
	cin >> x; 	cin.ignore();

	cout << "\nwhat operation [+,-,*,/]? ";
	cin >> S; 	cin.ignore();

	cout << "\nPlease enter 2nd number: ";
	cin >> y; 	cin.ignore();

	switch (S)
	{
	case '+':
		cout << "\n\t" << x << " + " << y << " = " << x + y;
		break;
	case '-':
		cout << "\n\t" << x << " - " << y << " = " << x - y;
		break;

	case '*':
		cout << "\n\t" << x << " * " << y << " = " << x * y;
		break;

	case '/':
		cout << "\n\t" << x << " / " << y << " = " << x / y;
		break;
	default:
		cout << "\nWrong input";
		break;
	}

	
    return 0;
}