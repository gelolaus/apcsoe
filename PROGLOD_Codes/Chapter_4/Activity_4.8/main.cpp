// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main() {

    char x[20] = "Group of characters";
    char y[6];

    y[0] = 'A';
    y[1] = 'N';
    y[2] = 'G';
    y[3] = 'E';
    y[4] = 'L';
    y[5] = 'O';

    /* Printing the values of x as a string */
    printf("The value of x is: [%s]\n\n", x);

    /* Printing the values of y using a loop */
    for (int i = 0; i < 6; i++) {
        printf("The value of y[%d] is: [%c]\n", i, y[i]);
    }

    printf("\n");

    /* Display only letter C in x*/
    printf("The value of x[9] is: [%c]\n", x[9]);

    return 0;

}