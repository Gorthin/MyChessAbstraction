#include <iostream>
#include <string>
#include "headers\ChessBoard.h"

int main()
{
	Board b;
	std::string s;
	bool newgame = true;

	while(newgame){
		b.setBoard();
		while (b.playGame());
		std::cout << "Do you want to play again? (y for yes, anything else for no) ";
		std::cin >> s;
		if (s != "y")
			newgame = false;
	}

	return 0;
}