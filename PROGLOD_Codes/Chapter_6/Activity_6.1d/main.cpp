// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int i, n, f = 1;

    /* Inputting values */
    cout << "Input a number: ";
    cin >> n;

    /* Outputting values */
    for (i = 1; i <= n; i++) {
        f *= i;
    }

    cout << "The factorial of the number is: " << f << endl;

    return 0;

}