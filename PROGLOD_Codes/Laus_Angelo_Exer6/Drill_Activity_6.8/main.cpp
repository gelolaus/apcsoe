// Created by Angelo John Benedict Laus
// Guide: https://www.codespeedy.com/make-diamond-shape-pattern-in-cpp/

#include <iostream>

using namespace std;

int main() {
    int rows, spaces, asterisks;

    cout << "Input number of rows: ";
    cin >> rows;

    spaces = rows - 1;
    asterisks = 1;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        spaces--;

        for (int j = 1; j <= asterisks; j++) {
            cout << "*";
        }
        asterisks += 2;

        cout << endl;
    }

    spaces = 1;
    asterisks = rows * 2 - 3;

    for (int i = 1; i <= rows - 1; i++) {
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        spaces++;

        for (int j = 1; j <= asterisks; j++) {
            cout << "*";
        }
        asterisks -= 2;

        cout << endl;
    }

    return 0;
}