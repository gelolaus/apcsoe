/* Simple login system that will get data from a .txt file at ../database/accounts.txt where the username and password is separated by a comma */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    /* Declaring and initializing */
    string username, password, line;
    bool isFound = false;

    /* Inputting values */
    cout << "Please input your username: ";
    cin >> username;
    cout << "Please input your password: ";
    cin >> password;

    /* Opening the file */
    ifstream accounts("../database/accounts.txt");

    /* Checking if the file is open */
    if (accounts.is_open()) {

        /* Looping through the file */
        while (getline(accounts, line)) {

            /* Checking if the username and password is found */
            if (line.find(username + "," + password) != string::npos) {

                /* Setting isFound to true */
                isFound = true;

                /* Breaking the loop */
                break;

            }

        }

        /* Closing the file */
        accounts.close();

    }

    /* Checking if the username and password is found */
    if (isFound) {

        /* Outputting values */
        cout << "\nWelcome, " << username << "!" << endl;

    } else {

        /* Outputting values */
        cout << "\nInvalid username or password!" << endl;

    }

    return 0;

}