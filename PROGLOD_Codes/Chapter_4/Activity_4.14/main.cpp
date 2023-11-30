// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {

    char y[10];

    cout << "Please input a word: ";

    cin >> y;
    cin.ignore(); // this is used to ignore additional characters upon pressing enter

    cout << "The value you entered is: [" << y << "]" << endl;

    return 0;

}