// Created by Angelo John Benedict Laus - BSCPE 231

#include <cstdio>
#include <iostream>

using namespace std;

int main() {

    /* Declaring and initializing */
    int dec = 89;
    int bin = 0b101010110;
    int oct = 026;
    int hex = 0xFA;

    /* Printing of values */
    printf("This is printf value for dec: [%d]\n", dec);
    printf("This is printf value for bin: [%d]\n", bin);
    printf("This is printf value for oct: [%d]\n", oct);
    printf("This is printf value for hex: [%d]\n\n", hex);

    printf("This is printf value for dec: [%d]\n", dec);
    printf("This is printf value for bin: [%d]\n", bin);
    printf("This is printf value for oct: [%o]\n", oct);
    printf("This is printf value for hex: [%x]\n", hex);

    return 0;

}