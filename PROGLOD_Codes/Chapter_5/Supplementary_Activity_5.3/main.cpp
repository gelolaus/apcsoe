// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main() {

    /* Declaring and initializing */
    float bill, discount;
    char senior;

    /* Inputting values */
    cout << "Please input the total bill: ";
    cin >> bill;
    cout << "Are you a senior citizen? [Y/N]: ";
    cin >> senior;
    cin.ignore();

    /* Calculating and outputting values */
    if (senior == 'Y' || senior == 'y' || senior == 'Yes' || senior == 'YES' || senior == 'yes') {
        discount = bill - (bill * 0.2);
        cout << "\nDISCOUNTED! Here is your bill: " << discount << endl;
    }
    else if (senior == 'N' || senior == 'n' || senior == 'No' || senior == 'NO' || senior == 'no') {
        discount = bill;
        cout << "\nNO DISCOUNT! Here is your bill: " << discount << endl;
    }
    // To start learning error handling
    else {
        cout << "\nINVALID INPUT! Please try again." << endl;
    }

    return 0;

}