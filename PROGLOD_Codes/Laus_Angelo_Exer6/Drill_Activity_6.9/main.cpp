// Created by Angelo John Benedict Laus - BSCPE231
// Credits to Gerard Briones for the system("cls");
// Thank you for the <string> <3

#include <iostream>
#include <string> // Better used for <string> data type https://www.w3schools.com/cpp/cpp_strings.asp

using namespace std;

int main() {
    char choice;
    string firstName, lastName;
    double expGrades[10], practicalGrades[2], finalProjectGrade, expAve = 0, practicalAve = 0, finalGrade = 0;

    do {
        cout << "[E]dit name\n[I]nput grades\n[C]ompute grades\nE[x]it\nInput choice: ";
        cin >> choice;

        switch (choice) {
            case 'E':
            case 'e':
                do {
                    cout << "Enter your Last name: ";
                    cin >> lastName;
                    cout << "Enter your First Name: ";
                    cin >> firstName;
                    cout << "You entered " << lastName << ", " << firstName << ". Are the inputs correct [Y/N] ? ";
                    cin >> choice;
                } while (choice != 'Y' && choice != 'y');
                system("cls");
                break;

            case 'I':
            case 'i':
                do {
                    for (int i = 0; i < 10; i++) {
                        cout << "Enter the grade for Experiment " << i + 1 << ": ";
                        cin >> expGrades[i];
                        expAve += expGrades[i];
                    }
                    expAve /= 10;

                    for (int i = 0; i < 2; i++) {
                        cout << "Enter the grade for Practical Exam " << i + 1 << ": ";
                        cin >> practicalGrades[i];
                        practicalAve += practicalGrades[i];
                    }
                    practicalAve /= 2;

                    cout << "Enter the grade for Final Project: ";
                    cin >> finalProjectGrade;

                    cout << "Are the inputs correct [y/n] ? ";
                    cin >> choice;
                } while (choice != 'Y' && choice != 'y');
                system("cls");
                break;

            case 'C':
            case 'c':
                finalGrade = 0.2 * expAve + 0.3 * practicalAve + 0.5 * finalProjectGrade;

                cout << "Your average grade for Experiment 1 - 10 is " << expAve << endl;
                cout << "Your average grade for Practical Exams is " << practicalAve << endl;
                cout << "Your grade in Final Project is " << finalProjectGrade << endl;

                cout << "Experiment 20%: " << 0.2 * expAve << endl;
                cout << "Practical Exam 30%: " << 0.3 * practicalAve << endl;
                cout << "Final Project 50%: " << 0.5 * finalProjectGrade << endl;

                cout << "The final grade is: " << finalGrade << endl;
                cout << "Press any key to continue ...";
                cin.ignore();
                cin.get();
                system("cls");
                break;

            case 'X':
            case 'x':
                system("cls");
                break;

            default:
                cout << "Invalid input. Please try again." << endl;
                system("cls");
                break;
        }
    } while (choice != 'X' && choice != 'x');

    return 0;
}