// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    char x[5][10] = {"One", "Two", "Three", "Four", "Five"};

    cout << "The values for the double arrays are as follows: " << endl;
    
    /* Loop of printing the values */
    for (int i = 0; i < 5; i++) {
        cout << "- " << x[i] << endl;
    }

    cout <<"\n This is the 3rd character of the 3rd array: " << x[2][2] << endl;

    return 0;

}