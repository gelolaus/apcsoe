// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int i, n;

    /* Inputting values */
    cout << "Input a number: ";
    cin >> n;

    /* Outputting values */ 
    for (i = 0; i != n; i++) {
        cout << i + 1 << " " << endl;
    }

    return 0;

}