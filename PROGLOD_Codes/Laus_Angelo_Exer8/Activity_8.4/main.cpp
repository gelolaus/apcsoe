// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {

    char X[20];
    char Fname[20];
    char Lname[20];
    char Full_Name[40];

    cout << "Enter your first name: ";
    cin >> X;
    strcpy(Fname, X);

    cout << "Enter your last name: ";
    cin >> X;
    strcpy(Lname, X);

    strcpy(Full_Name, Lname);
    strcat(Full_Name, ", ");
    strcat(Full_Name, Fname);

    cout << "Your full name is " << Full_Name << endl;

}