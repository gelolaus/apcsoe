// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main() {
    int n, x = 0, y = 1, next = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series:\n";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << x << endl;
            continue;
        }
        if(i == 2) {
            cout << y << endl;
            continue;
        }
        next = x + y;
        x = y;
        y = next;
        
        cout << next << endl;
    }
    return 0;

}
