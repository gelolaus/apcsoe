// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {
    string input;

    do {
        cout << "Type the word \"Hello\": ";
        cin >> input;
    } while (input.compare("Hello") != 0);

    cout << "You typed the word \"Hello\"!" << endl;
}