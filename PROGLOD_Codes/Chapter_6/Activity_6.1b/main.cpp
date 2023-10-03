// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int n, i;
    int prime = 1;

    /* Inputting values */
    cout << "Input a number: ";
    cin >> n;

    /* Checking if the number is prime or not */
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    /* Outputting values */
    if (prime == 1) {
        cout << "The entered number is a prime number." << endl;
    } else {
        cout << "The entered number is not a prime number." << endl;
    }

    return 0;

}
