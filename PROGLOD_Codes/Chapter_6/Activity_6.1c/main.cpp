// Created by Angelo John Benedict Laus - BSCPE 231
// Credits to: https://stackoverflow.com/questions/5200879/printing-prime-numbers-from-1-through-100

#include <iostream>

using namespace std;

int main () 
{
    for (int i=2; i<100; i++) 
    {
        int prime=1;
        for (int n=2; n*n<=i; n++)
        {
            if (i % n == 0) 
            {
                prime=0;
                break;    
            }
        }   
        if(prime==1) cout << i << " ";
    }
    return 0;
}