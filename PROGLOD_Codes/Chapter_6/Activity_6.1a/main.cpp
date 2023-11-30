// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int i, n, sum = 0;

    /* Inputting values */
    cout << "Input a number: ";
    cin >> n;

    /* Outputting values */
    for (i = 0; i != n; i++) {
        cout << i + 1 << " ";
    }

    /* Adding the listed numbers */
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "\nSum: " << sum << endl;

    return 0;

}