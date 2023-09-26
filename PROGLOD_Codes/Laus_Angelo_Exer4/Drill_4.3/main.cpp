// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
#include <string>

using namespace std;

int main() {

    /* Declaring and initializing */
    char nn[5][10];
    int age[5];

    cout << "Hello, there!" << endl;

    /* Inputing values */
    for (int i = 0; i < 5; i++) {
        cout << "Please input a nickname: ";
        cin >> nn[i];
        cout << "Please input the age of " << nn[i] << ": ";
        cin >> age[i];
    }

    /* Outputting values in a table */
    cout << "Here's the summary of their nicknames and ages:\n" << 
    "\tNickname\tAge" << endl;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ".\t" << nn[i] << "\t\t" << age[i] << endl;
    }

    return 0;

}