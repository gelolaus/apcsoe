// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    cout << "Numbers between 100 and 200, divisible by 9: ";
    for (int i = 100; i <= 200; i++) {
        if (i % 9 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum: " << sum << endl;
    return 0;
}