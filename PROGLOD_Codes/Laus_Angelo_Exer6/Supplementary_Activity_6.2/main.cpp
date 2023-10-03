// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {
    int i = 0;
    int input;

    while (i < 10) {
        cout << "Enter any number other than 5: ";
        cin >> input;

        if (input == 5) {
            cout << "Hey! you weren't supposed to enter 5!" << endl;
            return 0;
        }

        i++;

        if (i == 10) {
            cout << "Wow, you're more patient than I am, you win." << endl;
            return 0;
        }
    }

    return 0;
}