#include <iostream>
#include <random>

using namespace std;

struct myBet {
  bool bet4 = false;
  bool bet5 = false;
  bool bet6 = false;
  bool bet8 = false;
  bool bet9 = false;
  bool bet10 = false;
};

int rollDice();
bool checkBet(myBet bet, int dice1, int dice2);
int updateCash(int cash, bool betWon);

void displayBoard() {}
void displayDice() {}

int main() {
  myBet bet;
  int cash = 1000;

  // Prompt the player to place a bet.
  cout << "Place your bet: ";
  int betAmount;
  cin >> betAmount;

  // Roll the dice.
  int dice1 = rollDice();
  int dice2 = rollDice();

  // Check the bet.
  bool betWon = checkBet(bet, dice1, dice2);

  // Update the player's cash.
  cash = updateCash(cash, betWon);

  // Display the result of the bet.
  cout << "You " << (betWon ? "won" : "lost") << " your bet." << endl;
  cout << "Your new cash balance is " << cash << endl;

  return 0;
}

int rollDice() {
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist(1, 6);
  return dist(gen);
}

bool checkBet(myBet bet, int dice1, int dice2) {
  int sum = dice1 + dice2;
  if (bet.bet4 && sum == 4) {
    return true;
  } else if (bet.bet5 && sum == 5) {
    return true;
  } else if (bet.bet6 && sum == 6) {
    return true;
  } else if (bet.bet8 && sum == 8) {
    return true;
  } else if (bet.bet9 && sum == 9) {
    return true;
  } else if (bet.bet10 && sum == 10) {
    return true;
  } else {
    return false;
  }
}

int updateCash(int cash, bool betWon) {
  if (betWon) {
    cash += betAmount;
  } else {
    cash -= betAmount;
  }
  return cash;
}
