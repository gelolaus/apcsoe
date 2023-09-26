// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    int x[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "The values for the double arrays are as follows: " << endl;
    cout << "\t\tColumn" << endl;
    cout << "\t[0]\t[1]\t[2]" << endl;
    cout << "R [0]\t" << x[0][0] << "\t" << x[0][1] << "\t" << x[0][2] << endl;
    cout << "O [1]\t" << x[1][0] << "\t" << x[1][1] << "\t" << x[1][2] << endl;
    cout << "W [2]\t" << x[2][0] << "\t" << x[2][1] << "\t" << x[2][2] << endl;

    return 0;

}