// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int s1, s2, s3;

    /* Inputting values */
    cout << "First side: ";
    cin >> s1;
    cout << "Second side: ";
    cin >> s2;
    cout << "Third side: ";
    cin >> s3;

    /* Outputting values */
    if (s1 == s2 && s2 == s3) {
        cout << "\nEquilateral" << endl;
    }
    else if (s1 == s2 || s2 == s3 || s1 == s3) {
        cout << "\nIsosceles" << endl;
    }
    else {
        cout << "\nScalene" << endl;
    }

    return 0;

}