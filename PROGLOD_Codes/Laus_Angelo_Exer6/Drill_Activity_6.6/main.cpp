// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {
    int rows, count = 0;

    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            count++;
            cout << count << " ";
        }
        cout << endl;
    }

    return 0;
}