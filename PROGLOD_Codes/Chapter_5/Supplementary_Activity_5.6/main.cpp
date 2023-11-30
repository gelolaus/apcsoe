// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int productType;

    /* Inputting values */
    cout << "Choose a Product Type by inputting a number:\n\t1. Shoes\n\t2. Shirts\n\t3. Pants\n\t4. Accessories\nInput: ";
    cin >> productType;

    system("cls");

    /* Outputting values */
    switch (productType) {
        case 1:
            cout << "1. SHOES\n   Addidas\n   Nike\n   Under Armour" << endl;

            break;
        case 2:
            cout << "2. SHIRTS\n   Lacoste\n   Guess\n   Calvin Klein" << endl;
            break;
        case 3:
            cout << "3. PANTS\n   Diesel\n   Lee\n   Levis" << endl;
            break;
        case 4:
            cout << "4. ACCESSORIES\n   Charriol\n   BVLGARI\n   Dunhill" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }

    return 0;

}