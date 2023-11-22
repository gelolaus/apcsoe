// 7.2  return value.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

//function declarations
int Enter_a_number();
void error_msg();


int main()
{
	int x=0;
	
	do
	{
		cout << "\nPlease enter Number from 1 to 10: ";
		x=Enter_a_number();

	} while (x != 0);
	
	cout << "\nSuccess!!!\n";
	system("pause");
	return 0;
}

//function definition
int Enter_a_number()
{
	int number;
	cin >> number;
	cin.ignore();

	if ((number >= 1) && (number <= 10))
		return 0;
	else
	{
		error_msg();
		return 1;
	}
}

void error_msg()
{
	cout << "\n\tInvalid input!!\n";
}
