#include <iostream>
#include <string>

using namespace std;

void main() {
    string Fname;
    string Lname;

    cout << "Enter your first name: ";
    cin >> Fname;

    cout << "Enter your last name: ";
    cin >> Lname;

    cout << "The length of your first name is " << Fname.length() << endl;
    cout << "The length of your last name is " << Lname.length() << endl;
    
}