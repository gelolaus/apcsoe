// Created by Angelo John Benedict Laus - BSCPE 231

#include <iostream>

using namespace std;

int main()
{
    int month, day;

    cout << "Enter your month of birth: ";
    cin >> month;
    cout << "Enter your day of birth: ";
    cin >> day;

    if (month == 1)
    {
        if (day <= 19)
        {
            cout << "Your zodiac sign is Capricorn.";
        }
        else
        {
            cout << "Your zodiac sign is Aquarius.";
        }
    }
    else if (month == 2)
    {
        if (day <= 18)
        {
            cout << "Your zodiac sign is Aquarius.";
        }
        else
        {
            cout << "Your zodiac sign is Pisces.";
        }
    }
    else if (month == 3)
    {
        if (day <= 20)
        {
            cout << "Your zodiac sign is Pisces.";
        }
        else
        {
            cout << "Your zodiac sign is Aries.";
        }
    }
    else if (month == 4)
    {
        if (day <= 19)
        {
            cout << "Your zodiac sign is Aries.";
        }
        else
        {
            cout << "Your zodiac sign is Taurus.";
        }
    }
    else if (month == 5)
    {
        if (day <= 20)
        {
            cout << "Your zodiac sign is Taurus.";
        }
        else
        {
            cout << "Your zodiac sign is Gemini.";
        }
    }
    else if (month == 6)
    {
        if (day <= 20)
        {
            cout << "Your zodiac sign is Gemini.";
        }
        else
        {
            cout << "Your zodiac sign is Cancer.";
        }
    }
    else if (month == 7)
    {
        if (day <= 22)
        {
            cout << "Your zodiac sign is Cancer.";
        }
        else
        {
            cout << "Your zodiac sign is Leo.";
        }
    }
    else if (month == 8)
    {
        if (day <= 22)
        {
            cout << "Your zodiac sign is Leo.";
        }
        else
        {
            cout << "Your zodiac sign is Virgo.";
        }
    }
    else if (month == 9)
    {
        if (day <= 22)
        {
            cout << "Your zodiac sign is Virgo.";
        }
        else
        {
            cout << "Your zodiac sign is Libra.";
        }
    }
    else if (month == 10)
    {
        if (day <= 22)
        {
            cout << "Your zodiac sign is Libra.";
        }
        else
        {
            cout << "Your zodiac sign is Scorpio.";
        }
    }
    else if (month == 11)
    {
        if (day <= 21)
        {
            cout << "Your zodiac sign is Scorpio.";
        }
        else
        {
            cout << "Your zodiac sign is Sagittarius.";
        }
    }
    else if (month == 12)
    {
        if (day <= 21)
        {
            cout << "Your zodiac sign is Sagittarius.";
        }
        else
        {
            cout << "Your zodiac sign is Capricorn.";
        }
    }
    else
    {
        cout << "Invalid input.";
    }

    return 0;
}