// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {

    char X[20];
    char Fname[20];
    char Lname[20];

    cout << "Enter your first name: ";
    cin >> X;
    strcpy(Fname, X);

    cout << "Enter your last name: ";
    cin >> X;
    strcpy(Lname, X);

    cout << "Your full name is " << Fname << " " << Lname << endl;

}