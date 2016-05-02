#include <iostream>
#include "TTTboard.h"
#include "AIPlayer.h"

using namespace std;

int main(){
	int numPlayers, boardSize, numToWin;

	//Get necessary set up input from user

	cout << "Welcome to Simple Tic-Tac-Toe: AI edition! \n"
		 << "Please enter the number of human players(1 or 2): ";

	cin >> numPlayers;

	cout << "\nPlease enter the size of the board: ";

	cin >> boardSize;

	cout << "\nPlease enter the number in a row to win: ";

	cin >> numToWin;

	//***********

	//Build board
	TTTboard board(boardSize, numToWin);

	cout << "\n\n\n";

	board.printBoard();


	return 0;
}