#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <iostream>
#include <cmath>
#include <string>
#include "ChessPiece.h"
#include "Color.h"

class Square
{
private:
	Piece piece;
	Color color;
	int x, y;
public:
	void setSpace(Square*);
	void setEmpty();
	void setPieceAndColor(Piece, Color);
	Piece getPiece();
	Color getColor();
	void setX(int ex) { x = ex; }
	void setY(int why) { y = why; }
	int getX() { return x; }
	int getY() { return y; }
	Square();
};

class Board
{
    private:
	    Square square[8][8];
	    Color turn=WHITE_SQUARE;
        void printBoard();
    public:
        void setBoard();
        bool playGame();
};

#endif // CHESSBOARD_H