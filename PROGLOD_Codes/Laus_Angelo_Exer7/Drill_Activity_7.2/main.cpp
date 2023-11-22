// random.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

	float x;
	unsigned int dice1, dice2, dice3;
	int cash = 1000;
	int bet, Dtotal;
	char BorS;
	char ans;

void random();
void input();
void graphics();
void winner();


int main()
{
	
	do
	{

        random();
		system("cls");

        input();
        graphics();
        winner();

		
		if (cash <= 0)
		{
			cout << "\nYou do not have money to play\n";
			cout << "\nBetter Luck Next time!\n";
			cout << "Press any key to exit....";
			ans = 'n';
			getchar();
		}
		else
		{
			cout << "\nYour cash is " << cash;

			cout << "\ndo you want another [y/n]? ";
			cin >> ans;
			cin.ignore();
		}
	} while (ans == 'y');

	return 0;
}

void random() {

    	srand((unsigned)time(NULL));
		x = (sin(rand()) * 100);
		dice1 = x;
		dice1 = (dice1 % 6) + 1;

		srand((unsigned)time(NULL));
		x = (sin(rand()) * 111);
		dice2 = x;
		dice2 = (dice2 % 6) + 1;

		srand((unsigned)time(NULL));
		x = (sin(rand()) * 521);
		dice3 = x;
		dice3 = (dice3 % 6) + 1;

}

void input() {

		cout << "\nYour Cash is " << cash << endl;
		do
		{
			cout << "\nWhat is your guess? [B]ig or [S]mall? "; cin >> BorS; cin.ignore();
			if ((BorS != 'b') &&
				(BorS != 'B') &&
				(BorS != 's') &&
				(BorS != 'S'))
				cout << "\n!!!Please Enter [B] for big or [S] for Small!!!";
		} while ((BorS != 'b') &&
			     (BorS != 'B') &&
			     (BorS != 's') && 
			     (BorS != 'S')); 

		do
		{
			cout << "\n\tPlease enter your bet : P"; cin >> bet; cin.ignore();
			if (bet > cash)
				cout << "You don't have enough cash!\n ";
		} while (bet > cash);

}

void graphics() {

		Dtotal = dice1 + dice2 + dice3;
		cout << "\n\t\tDice 1 : " << dice1 << endl;
		cout << "\t\tDice 2 : " << dice2 << endl;
		cout << "\t\tDice 3 : " << dice3 << endl;
		cout << "\n\t\tDice total = " << Dtotal;
		
		switch (dice1)
		{
		case 1:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|             | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|             | \n");
			printf("\t\t|_____________| \n");
			break;
		case 2:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|             | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 3:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 4:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 5:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 6:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		}

		switch (dice2)
		{
		case 1:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|             | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|             | \n");
			printf("\t\t|_____________| \n");
			break;
		case 2:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|             | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 3:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 4:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 5:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 6:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		}

		switch (dice3)
		{
		case 1:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|             | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|             | \n");
			printf("\t\t|_____________| \n");
			break;
		case 2:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|             | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 3:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o          | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|          o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 4:
			printf("\n\t\t _____________  \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 5:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|      o      | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		case 6:
			printf("\n\t\t _____________ \n");
			printf("\t\t|             | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|  o       o  | \n");
			printf("\t\t|_____________| \n");
			break;
		}

}

void winner() {

		if (Dtotal <= 10)
		{
			cout << "\n\n\t\tDice Total is Small\n";
			switch (BorS)
			{
			case 's':
			case 'S':
				cout << "\n\tYou Win!!!\n";
				cash = cash + bet;
				break;
			case 'b':
			case 'B':
				cout << "\n\tYou lose!!!\n";
				cash = cash - bet;
			}
		}
		else
		{
			cout << "\n\n\t\tDice Total is Big\n";
			switch (BorS)
			{
			case 's':
			case 'S':
				cout << "\n\tYou lose!!!\n";
				cash = cash - bet;
				break;
			case 'b':
			case 'B':
				cout << "\n\t\t\tYou win!!!\n";
				cash = cash + bet;
			}
		}

}