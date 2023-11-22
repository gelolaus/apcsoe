// Created by Angelo John Benedict Laus - BS CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {

    char date[4];
    char month[4];

    cout << "Enter your birth date (MMM DD, YYYY): ";
    cin.getline(date, 20);

    strncpy(month, date, 3);
    month[3] = '\0';

    cout << "Your birth month is " << month << endl;

}