#include <iostream>
#include <stdlib.h>

using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int num;
int row, column;
bool Turn = true;
bool draw = false;
int placeholder[9] = {0};

void show_board();
void player_inp();
bool game();

int main() {
    while (game()) {
        show_board();
        player_inp();
    }

    show_board();
    if (Turn && !draw) {
        cout << "Player 2 wins!!!!";
    } else if (!Turn && !draw) {
        cout << "Player 1 wins!!!!";
    } else {
        cout << "GAME DRAW!!!";
    }
}

void show_board() {
    cout << "\t " << board[0][0] << " |  " << board[0][1] << "  |  " << board[0][2] << endl;
    cout << "\t___|_____|_____" << endl;
    cout << "\t " << board[1][0] << " |  " << board[1][1] << "  |  " << board[1][2] << endl;
    cout << "\t___|_____|_____" << endl;
    cout << "\t " << board[2][0] << " |  " << board[2][1] << "  |  " << board[2][2] << endl;
}

void player_inp() {
    char player = Turn ? 'O' : 'X';

    cout << "Player " << (Turn ? "1 [O]" : "2 [X]") << "\nPlease input valid grid number: ";

    cin >> num;

    if (num < 1 || num > 9 || placeholder[num - 1] != 0) {
        cout << "Invalid input. Try again!\n";
        player_inp();
        return;
    }

    placeholder[num - 1] = num;

    switch (num) {
        case 1:
            row = 0;
            column = 0;
            break;
        case 2:
            row = 0;
            column = 1;
            break;
        case 3:
            row = 0;
            column = 2;
            break;
        case 4:
            row = 1;
            column = 0;
            break;
        case 5:
            row = 1;
            column = 1;
            break;
        case 6:
            row = 1;
            column = 2;
            break;
        case 7:
            row = 2;
            column = 0;
            break;
        case 8:
            row = 2;
            column = 1;
            break;
        case 9:
            row = 2;
            column = 2;
            break;
        default:
            cout << "Invalid input.";
            break;
    }

    board[row][column] = player;
    Turn = !Turn;
}

bool game() {
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return false;

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}
