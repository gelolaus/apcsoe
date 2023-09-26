// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {

    int x;

    cout << "Please input a number: ";

    cin >> x;
    cin.ignore(); // this is used to ignore additional characters upon pressing enter
    cout << "The value you entered is: [" << x << "]" << endl;

    return 0;

}