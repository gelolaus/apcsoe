// 7.1 Basic Function.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;

//function declarations
void print_a_line(); 
void print_an_asterisk();

int main()
{
	
	for (int i = 0; i != 5; i++)
	{
		print_a_line();    //function call for print_a_line
		print_an_asterisk();   //function call for print_an_asterisk
	}
	system("pause");
    return 0;
}

//function definition
void print_a_line()
{
	cout << "--------------------------------------------------------------------------------\n";
}

//function definition
void print_an_asterisk()
{
	cout << "********************************************************************************\n";
}
