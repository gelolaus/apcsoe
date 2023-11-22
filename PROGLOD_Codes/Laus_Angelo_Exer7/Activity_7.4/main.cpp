// 7.4 Call by pointer.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

//function declarations


void Menu();
void Enter_Choice(char* choice);
void sub_MenuA();
void sub_MenuB();
void sub_MenuC();
void sub_MenuD();

int main()
{
	char ans;
	char Main_choice, Sub_choice;
	int age;
	do
	{
		Menu();
		Enter_Choice(&Main_choice);

		switch (Main_choice)
		{
		case 'a':
		case 'A':
			sub_MenuA();
			break;
		case 'b':
		case 'B':
			sub_MenuB();
			break;
		case 'c':
		case 'C':
			sub_MenuC();
			break;
		case 'd':
		case 'D':
			sub_MenuD();
			break;
		default:
			cout << "\n\tInvalid Input!!";
			break;
		}

	

		Enter_Choice(Sub_choice);
		do {
			cout << "\n\nDo you want another [y/n]? "; cin >> ans; cin.ignore();
			if ((ans != 'y') &&
				(ans != 'Y') &&
				(ans != 'n') &&
				(ans != 'N'))
				cout << "\n\tInvalid Input\n";
		}while ((ans != 'y') &&
			(ans != 'Y') &&
			(ans != 'n') &&
			(ans != 'N'));
	} while (ans == 'y');
	return 0;
}

void Menu()
{
	cout << "\n[A] - Shoes ";
	cout << "\n[B] - Shirt ";
	cout << "\n[C] - Pants ";
	cout << "\n[D] - Accessories ";
}


void Enter_Choice(char* choice)
{
	cout << "\n\n\tPlease Enter your choice: "; cin >> *choice; cin.ignore();

}

void sub_MenuA()
{
	cout << "\n[1] - Addidas ";
	cout << "\n[2] - Nike ";
	cout << "\n[3] - Under Armour ";
	
}

void sub_MenuB()
{
	cout << "\n[1] - Lacoste ";
	cout << "\n[2] - Guess ";
	cout << "\n[3] - ClavinKlein ";
}

void sub_MenuC()
{
	cout << "\n[1] - Diesel ";
	cout << "\n[2] - Lee ";
	cout << "\n[3] - Levis ";
}

void sub_MenuD()
{
	cout << "\n[1] - Charriol ";
	cout << "\n[2] - BVLGARI ";
	cout << "\n[3] - Dunhill ";
}
