// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {

    string fname, lname;

    cout << "Enter your first name: ";
    getline(cin, fname);

    cout << "Enter your last name: ";
    getline(cin, lname);

    cout << "Your full name is " << fname << " " << lname << endl;

}