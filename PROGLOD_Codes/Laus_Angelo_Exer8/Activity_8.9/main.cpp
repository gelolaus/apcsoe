// Created by Angelo John Benedict Laus - BS in CpE 231

#include <iostream>

using namespace std;

void main() {
    char char1[] = "1234";
    char char2[] = "12.34";

    int int1 = atoi(char1);
    float float1 = atof(char2);

    cout << "int_int: " << int1 << endl;
    cout << "float_float: " << float1 << endl;
}