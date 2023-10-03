// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>
using namespace std;

int main() {
    int exp1, exp2, exp3, exp4, exp5, exp6, exp7, exp8, exp9, exp10, prac1, prac2, proj, total;
    char choice;

    do {
        /* Inputting values */
        cout << "Enter Experiment 1 grade: ";
        cin >> exp1;
        cout << "Enter Experiment 2 grade: ";
        cin >> exp2;
        cout << "Enter Experiment 3 grade: ";
        cin >> exp3;
        cout << "Enter Experiment 4 grade: ";
        cin >> exp4;
        cout << "Enter Experiment 5 grade: ";
        cin >> exp5;
        cout << "Enter Experiment 6 grade: ";
        cin >> exp6;
        cout << "Enter Experiment 7 grade: ";
        cin >> exp7;
        cout << "Enter Experiment 8 grade: ";
        cin >> exp8;
        cout << "Enter Experiment 9 grade: ";
        cin >> exp9;
        cout << "Enter Experiment 10 grade: ";
        cin >> exp10;
        cout << "Enter Practical Exam 1 grade: ";
        cin >> prac1;
        cout << "Enter Practical Exam 2 grade: ";
        cin >> prac2;
        cout << "Enter Final Project grade: ";
        cin >> proj;

        /* Calculating total score */
        total = ((exp1 + exp2 + exp3 + exp4 + exp5 + exp6 + exp7 + exp8 + exp9 + exp10)/10 * 0.2) + ((prac1 + prac2)/2 * 0.3) + (proj * 0.5);

        /* Outputting total score */
        cout << "Total score: " << total << endl;

        /* Asking user if they want to continue */
        cout << "Do you want to continue? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}