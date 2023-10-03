// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int length, width, height, perimeter, area, volume;

    /* Inputting values */
    cout << "Please input the length of the rectangle: ";
    cin >> length;
    cout << "Please input the width of the rectangle: ";
    cin >> width;
    cout << "Please input the height of the rectangle: ";
    cin >> height;

    /* Calculating values */
    perimeter = 2 * (length + width);
    area = length * width;
    volume = length * width * height;

    /* Outputting values */
    cout << "\nHere are the results:\n" <<
    "Perimeter: " << perimeter << "\nArea: " << area << "\nVolume: " << volume << endl;

    return 0;

}