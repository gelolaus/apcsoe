// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>
#include <string>

using namespace std;

void main() {
    char char1[5];
    char char2[5];

    int int1 = 22222; float float1 = 22222;

    sprintf(char1, "%d", int1);
    sprintf(char2, "%f", float1);

    cout << "char_int: " << char1 << endl;
    cout << "char_float: " << char2 << endl;
}