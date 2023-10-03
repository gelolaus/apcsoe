// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;


int main()
{
	int quiz;

	cout << "The passing mark is 70.";
	cout << "\nPlease enter your quiz result [1-100]: ";
	cin >> quiz;
	cin.ignore();
	if (quiz >= 70)
		cout << "\n\tCongratulation, you pass the exam.\n";
	else
		cout << "\n\tSorry, you got a failing mark.\n";
	
    return 0;
}
