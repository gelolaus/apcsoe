// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;


int main()
{
	int x;
	cout << "Please input a value for x: ";
	cin >> x;
	cin.ignore();

	cout << "\t1st line x \t:" << x << endl;
		//displays the current value for x before incrementing
	cout << "\t2nd line x++\t:" << x++ << endl;
		//this now displays the x++ of the previous statement
	cout << "\t3rd line x \t:" << x << endl;   
		//this an incremented value of x
	cout << "\t4th line ++x \t:" << ++x << endl; 

	
    return 0;
}