// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
#include <string>
using namespace std;

int main()
{

    /* Declaring and initializing */
    int monthNum, day, year; string userName;
    char monthWord[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November","December" };

    /* Inputting and outputting */
    cout << "Greetings!\n" << endl;
    

    cout << "Please enter your name: ";
    getline(cin, userName);
    cout << "What is your birth month [1-12]? ";
    cin >> monthNum;
    cout << "The day of your birth is? ";
    cin >> day;
    cout << "What year where you born? ";
    cin >> year;

    cout << "\n**********************************************************************************************************\n\n" <<
    "\t\t\tHello and good day, " << userName << "! So, you were born on " << monthWord[monthNum - 1] << " " << day << ", " << year << ".\n\n" <<
    "**********************************************************************************************************" << endl;

    return 0;
}

