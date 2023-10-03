// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main()
{
	int No_of_Sides;

	cout << "\nPlease enter the number of sides of a shape: ";
	cin >> No_of_Sides;
	cin.ignore();

	if (No_of_Sides == 3)
		cout << "\n\tThe shape is Triangle" << endl;
	else if (No_of_Sides == 4)
		cout << "\n\tThe shape is Square" << endl;
	else if (No_of_Sides == 5)
		cout << "\n\tThe shape is Pentagon" << endl;
	else if (No_of_Sides == 6)
		cout << "\n\tThe shape is Hexagon" << endl;
	else if (No_of_Sides == 7)
		cout << "\n\tThe shape is heptagon" << endl;
	else if (No_of_Sides == 8)
		cout << "\n\tThe shape is Octagon" << endl;
	else if (No_of_Sides == 9)
		cout << "\n\tThe shape is Nonagon" << endl;
	else if (No_of_Sides == 10)
		cout << "\n\tThe shape is Decagon" << endl;
	else
		cout << "\n\tI can not determine the shape" << endl;
	
	return 0;
}
