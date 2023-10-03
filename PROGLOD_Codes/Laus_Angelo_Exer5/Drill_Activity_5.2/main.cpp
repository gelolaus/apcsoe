// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter your year of birth: ";
    cin >> year;

    if (year % 12 == 0)
    {
        cout << "Your zodiac sign is Monkey.";
    }
    else if (year % 12 == 1)
    {
        cout << "Your zodiac sign is Rooster.";
    }
    else if (year % 12 == 2)
    {
        cout << "Your zodiac sign is Dog.";
    }
    else if (year % 12 == 3)
    {
        cout << "Your zodiac sign is Pig.";
    }
    else if (year % 12 == 4)
    {
        cout << "Your zodiac sign is Rat.";
    }
    else if (year % 12 == 5)
    {
        cout << "Your zodiac sign is Ox.";
    }
    else if (year % 12 == 6)
    {
        cout << "Your zodiac sign is Tiger.";
    }
    else if (year % 12 == 7)
    {
        cout << "Your zodiac sign is Hare.";
    }
    else if (year % 12 == 8)
    {
        cout << "Your zodiac sign is Dragon.";
    }
    else if (year % 12 == 9)
    {
        cout << "Your zodiac sign is Snake.";
    }
    else if (year % 12 == 10)
    {
        cout << "Your zodiac sign is Horse.";
    }
    else if (year % 12 == 11)
    {
        cout << "Your zodiac sign is Sheep.";
    }
    else
    {
        cout << "Invalid input.";
    }

    return 0;
}
// Para po 69, hehe