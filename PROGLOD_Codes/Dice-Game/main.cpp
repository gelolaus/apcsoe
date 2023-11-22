// Semi-created by Angelo John Benedict Laus of BSCPE231 (honestly, some are ChatGPTfied).

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct myBet {
    bool bet4 = false;
    bool bet5 = false;
    bool bet6 = false;
    bool bet8 = false;
    bool bet9 = false;
    bool bet10 = false;
};

void displayBoard(myBet x, int cash);
void displayDice(int dice1, int dice2);

int main() {
    myBet bet;
    int dice1, dice2;
    int cash = 5000;

    char rollAgain;
    char playAgain;

        displayBoard(bet, cash);

    do {
        // Reset bets for each new game
        bet.bet4 = false;
        bet.bet5 = false;
        bet.bet6 = false;
        bet.bet8 = false;
        bet.bet9 = false;
        bet.bet10 = false;

        
        cout << "Please enter your bet [4,5,6,8,9,10]: ";
        int choice;
        cin >> choice;

        if (choice == 4 || choice == 5 || choice == 6 || choice == 8 || choice == 9 || choice == 10) {
            if ((choice == 4 && !bet.bet4) || (choice == 5 && !bet.bet5) ||
                (choice == 6 && !bet.bet6) || (choice == 8 && !bet.bet8) ||
                (choice == 9 && !bet.bet9) || (choice == 10 && !bet.bet10)) {
                if (cash >= 500) {
                    cash -= 500;
                    switch (choice) {
                        case 4:
                            bet.bet4 = true;
                            break;
                        case 5:
                            bet.bet5 = true;
                            break;
                        case 6:
                            bet.bet6 = true;
                            break;
                        case 8:
                            bet.bet8 = true;
                            break;
                        case 9:
                            bet.bet9 = true;
                            break;
                        case 10:
                            bet.bet10 = true;
                            break;
                    }
                } else {
                    cout << "Not enough cash to place the bet." << endl;
                }
            } else {
                cout << "You have already placed a bet on " << choice << ". Please choose another number." << endl;
            }
        } else {
            cout << "Invalid bet choice. Please choose a valid number." << endl;
        }

        displayBoard(bet, cash);

        cout << "Do you want to place another bet [y/n]? ";
        cin >> rollAgain;

    } while (rollAgain == 'y' || rollAgain == 'Y');

    do {
        srand(time(0));
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        displayDice(dice1, dice2);

        int totalDice = dice1 + dice2;

        if (totalDice == 7) {
            cout << "Oops! You rolled a 7 and lost all your bet money!" << endl;
            cash -= 500 * (bet.bet4 + bet.bet5 + bet.bet6 + bet.bet8 + bet.bet9 + bet.bet10);
        } else {
            int winnings = 0;
            if (bet.bet4 && (totalDice == 4 || totalDice == 10)) {
                winnings += (totalDice == 4) ? 950 : 500;
            }
            if (bet.bet5 && (totalDice == 5 || totalDice == 9)) {
                winnings += (totalDice == 5) ? 700 : 500;
            }
            if (bet.bet6 && (totalDice == 6 || totalDice == 8)) {
                winnings += (totalDice == 6) ? 625 : 500;
            }

            if (winnings > 0) {
                cash += winnings;
                cout << "Congratulations! You won " << winnings << "!" << endl;
            } else {
                cout << "Sorry, you didn't win this round." << endl;
            }
        }

        cout << "Do you want to roll the dice again [y/n]? ";
        cin >> rollAgain;

    } while (rollAgain == 'y' || rollAgain == 'Y');

    cout << "Your remaining cash: " << cash << endl;
    cout << "Do you want to play again [y/n]? ";
    cin >> playAgain;

    if (playAgain == 'n' || playAgain == 'N') {
        cout << "Thanks for playing!" << endl;

    }

    return 0;
}

void displayBoard(myBet x, int cash) {
    system("cls");

    char placeBet4[2][4] = {"   ", "500"};
    char placeBet5[2][4] = {"   ", "500"};
    char placeBet6[2][4] = {"   ", "500"};
    char placeBet8[2][4] = {"   ", "500"};
    char placeBet9[2][4] = {"   ", "500"};
    char placeBet10[2][4] = {"   ", "500"};

    cout << "cash : " << cash << endl;
    cout << "\n\t\t\t________________________________________________ " << endl;
    cout << "\t\t\t|       |       |       |       |       |       |" << endl;
    cout << "\t\t\t|       |       |       |       |       |       |" << endl;
    cout << "\t\t\t|   4   |   5   |   6   |   8   |   9   |   10  |" << endl;
    cout << "\t\t\t|       |       |       |       |       |       |" << endl;
    cout << "\t\t\t|_______|_______|_______|_______|_______|_______|" << endl;
    cout << "\t\t\t|  " << (x.bet4 ? placeBet4[1] : placeBet4[0]) << "  |  " << (x.bet5 ? placeBet5[1] : placeBet5[0]) << "  |  " << (x.bet6 ? placeBet6[1] : placeBet6[0]) << "  |  " << (x.bet8 ? placeBet8[1] : placeBet8[0]) << "  |  " << (x.bet9 ? placeBet9[1] : placeBet9[0]) << "  |  " << (x.bet10 ? placeBet10[1] : placeBet10[0]) << "  |" << endl;
    cout << "\t\t\t|_______|_______|_______|_______|_______|_______|" << endl;
}

void displayDice(int dice1, int dice2) {
    char hole1[7] = {' ', ' ', ' ', ' ', 'o', 'o', 'o'};
    char hole2[7] = {' ', ' ', 'o', 'o', 'o', 'o', 'o'};
    char hole3[7] = {' ', ' ', ' ', ' ', ' ', ' ', 'o'};
    char hole4[7] = {' ', 'o', ' ', 'o', ' ', 'o', ' '};
    char hole5[7] = {' ', ' ', ' ', ' ', ' ', ' ', 'o'};
    char hole6[7] = {' ', ' ', 'o', 'o', 'o', 'o', 'o'};
    char hole7[7] = {' ', ' ', ' ', ' ', 'o', 'o', 'o'};

    cout << endl;
    cout << "\t\t\t\t _____________  \t _____________  \n";
    cout << "\t\t\t\t|  " << hole1[dice1] << "       " << hole2[dice1] << "  | \t|  " << hole1[dice2] << "       " << hole2[dice2] << "  | \n";
    cout << "\t\t\t\t|             | \t|             | \n";
    cout << "\t\t\t\t|  " << hole3[dice1] << "   " << hole4[dice1] << "   " << hole5[dice1] << "  | \t|  " << hole3[dice2] << "   " << hole4[dice2] << "   " << hole5[dice2] << "  | \n";
    cout << "\t\t\t\t|             | \t|             | \n";
    cout << "\t\t\t\t|  " << hole6[dice1] << "       " << hole7[dice1] << "  | \t|  " << hole6[dice2] << "       " << hole7[dice2] << "  | \n";
    cout << "\t\t\t\t|_____________| \t|_____________| \n";
}
