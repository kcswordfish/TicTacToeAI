#ifndef TTTBOARD_H
#define TTTBOARD_H
#include <vector>
#include <string>

class TTTboard{
private:
	std::vector<std::vector<char>> gameBoard;
	unsigned int size;
	unsigned int numToWin;

public:
	TTTboard(int insize, int inNumToWin){
		size = insize;
		gameBoard.resize(insize);

		for(int i = 0; i < insize; ++i){
			gameBoard[i].resize(insize, 'E');
		}

	}

	bool placeMove(int inRow, int inCol, char piece){
		if(gameBoard[inRow][inCol] != 'E'){
			gameBoard[inRow][inCol] == piece;
			return true;
		}
		else
			std::cout << "That location already has a piece! Choose again\n";
			
		return false;
	}

	bool checkVictory
	

	void printBoard(){
		std::string bar = "---";

		for(unsigned col = 0; col < size - 1 ; ++col)
			bar += "+---";


		for(unsigned row = 0; row < size; ++row){
			std::cout << " ";
			for(unsigned col = 0; col < size; ++col){

				if(gameBoard[row][col] != 'E')
					std::cout << gameBoard[row][col];
				else
					std::cout << " ";
				
				if(col != size - 1)
					std::cout << " | ";
			}

			std::cout << '\n';

			if(row != size -1)
				std::cout << bar << '\n';


		}
	}


};

#endif