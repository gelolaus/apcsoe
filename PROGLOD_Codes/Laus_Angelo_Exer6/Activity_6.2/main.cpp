// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main()
{
	char choice;

	cout << "List of Product set \n";
	cout << "\t[A] Shoes \n";
	cout << "\t[B] Shirts \n";
	cout << "\t[C] Pants \n";
	cout << "\t[D] Accessories \n";
	cout << "\n\nEnter your choice : ";
	cin >> choice;
	cin.ignore();

	while ((choice != 'A') && 
		(choice != 'a')  &&
		(choice != 'B') &&
		(choice != 'b') &&		
		(choice != 'C') &&
		(choice != 'c') &&
		(choice != 'D') &&
		(choice != 'd'))
	{
		cout << "wrong input!! \n";
		cout << "\n\nEnter your choice : ";
		cin >> choice;
		cin.ignore();
	}
	
	
	return 0;
}
