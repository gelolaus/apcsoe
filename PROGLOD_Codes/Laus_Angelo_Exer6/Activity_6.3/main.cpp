#include <iostream>
using namespace std;


int main()
{
	char choice;

	do
	{
		cout << "This is where my program loops until the choice is not Y\n\n";

		cout << "Do you want to continue [Y/N]? ";
		cin >> choice; cin.ignore();

	} while ((choice == 'y') || (choice == 'Y'));

	
    return 0;
}
