// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    /* Declare and initialize */
    float f = 5e9;
    double df = 6000;
    long double ldf = 54.2232423;


    /* Printing the values */
    printf("This is printf value for f: [%f]\n", f);
    printf("This is printf value for df: [%lf]\n", df);
    printf("This is printf value for ldf: [%llf]\n\n", ldf);

    /* Printing the values using cout */
    cout << "This is cout value for f: [" << f << "]" << endl;
    cout << "This is cout value for df: [" << df << "]" << endl;
    cout << "This is cout value for ldf: [" << ldf << "]" << endl;

    /* Printing the ldf with 1, 2, 3, 4, 5, 6, 7 decimal places */
    printf("This is printf value for ldf: [%.1llf]\n", ldf);
    printf("This is printf value for ldf: [%.2llf]\n", ldf);
    printf("This is printf value for ldf: [%.3llf]\n", ldf);
    printf("This is printf value for ldf: [%.4llf]\n", ldf);
    printf("This is printf value for ldf: [%.5llf]\n", ldf);
    printf("This is printf value for ldf: [%.6llf]\n", ldf);
    printf("This is printf value for ldf: [%.7llf]\n", ldf);

    return 0;

}