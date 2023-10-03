// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;

	cout << "Please enter a value for x: ";
	cin >> x;
	cin.ignore();
	
	cout << "Please enter a value for y: ";
	cin >> y;
	cin.ignore();

	cout << "\n\tx + y = " << x + y;
	cout << "\n\tx - y = " << x - y;
	cout << "\n\tx * y = " << x * y;
	cout << "\n\tx / y = " << x / y;
	cout << "\n\tx % y = " << x % y;

	
	return 0;
}
