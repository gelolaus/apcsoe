// Created by Angelo John Benedict Laus - BS CpE 231

#include <iostream>
#include <cstring>

using namespace std;

void main() {
    char Fname[20];
    char Mname[20];
    char Lname[20];
    char Initials[20];

    cout << "Enter your first name: ";
    cin >> Fname;

    cout << "Enter your middle name: ";
    cin >> Mname;

    cout << "Enter your last name: ";
    cin >> Lname;

    Initials[0] = Fname[0];
    Initials[1] = '.';
    Initials[2] = Mname[0];
    Initials[3] = '.';
    Initials[4] = Lname[0];
    Initials[5] = '\0';

    cout << "Your initials are " << Initials << endl;

}
