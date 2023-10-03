// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main()
{
	char gender;

	cout << "What is your gender [M/F]? ";
	cin >> gender;
	cin.ignore();

	if ((gender == 'm') || (gender == 'M'))
		cout << "\n\tYou are a male.\n";
	else if ((gender == 'y') || (gender == 'Y'))
		cout << "\n\tYou are a female.\n";
	else
		cout << "\n\tI can not understand\n";
	
    return 0;
}
