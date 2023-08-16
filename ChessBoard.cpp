#include "ChessBoard.h"

Square::Square()
{
	piece = EMPTY;
	color = EMPTY_SQUARE;
}

void Square::setSpace(Square* space)
{
	color = space->getColor();
	piece = space->getPiece();
}

void Square::setEmpty()
{
	color = EMPTY_SQUARE;
	piece = EMPTY;
}

Piece Square::getPiece()
{
	return piece;
}

Color Square::getColor()
{
	return color;
}

void Square::setPieceAndColor(Piece p, Color c)
{
	piece = p;
	color = c;

}


void Board::printBoard() {
	using namespace std;
	cout << "   y: 0  1  2  3  4  5  6  7 " << endl << "x:" << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << " " << i << "   ";
		for (int j = 0; j < 8; j++)
		{
			Piece p = square[i][j].getPiece();
			Color c = square[i][j].getColor();

			switch (p)
			{
			case KING: (c == WHITE_SQUARE) ? cout << " K " : cout << " k ";
				break;
			case QUEEN: (c == WHITE_SQUARE) ? cout << " Q " : cout << " q ";
				break;
			case BISHOP:(c == WHITE_SQUARE) ? cout << " B " : cout << " b ";
				break;
			case KNIGHT:(c == WHITE_SQUARE) ? cout << " H " : cout << " h ";
				break;
			case ROOK: (c == WHITE_SQUARE) ? cout << " R " : cout << " r ";
				break;
			case PAWN: (c == WHITE_SQUARE) ? cout << " P " : cout << " p ";
				break;
			case EMPTY: cout << " " << "\21" << " ";
				break;
			default: cout << "XXX";
				break;
			}

		}
		cout << endl;
	}

}

void Board::setBoard()
{
	square[0][0].setPieceAndColor(ROOK, WHITE_SQUARE);
	square[1][0].setPieceAndColor(KNIGHT, WHITE_SQUARE);
	square[2][0].setPieceAndColor(BISHOP, WHITE_SQUARE);
	square[3][0].setPieceAndColor(QUEEN, WHITE_SQUARE);
	square[4][0].setPieceAndColor(KING, WHITE_SQUARE);
	square[5][0].setPieceAndColor(BISHOP, WHITE_SQUARE);
	square[6][0].setPieceAndColor(KNIGHT, WHITE_SQUARE);
	square[7][0].setPieceAndColor(ROOK, WHITE_SQUARE);

	square[0][7].setPieceAndColor(ROOK, BLACK_SQUARE);
	square[1][7].setPieceAndColor(KNIGHT, BLACK_SQUARE);
	square[2][7].setPieceAndColor(BISHOP, BLACK_SQUARE);
	square[3][7].setPieceAndColor(QUEEN, BLACK_SQUARE);
	square[4][7].setPieceAndColor(KING, BLACK_SQUARE);
	square[5][7].setPieceAndColor(BISHOP, BLACK_SQUARE);
	square[6][7].setPieceAndColor(KNIGHT, BLACK_SQUARE);
	square[7][7].setPieceAndColor(ROOK, BLACK_SQUARE);

	for (int i = 0; i < 8; i++)
	{
		square[i][1].setPieceAndColor(PAWN, WHITE_SQUARE);
		square[i][6].setPieceAndColor(PAWN, BLACK_SQUARE);

	}
	for (int i = 2; i < 6; i++)
	{
		for (int j = 0; j < 8; j++)
			square[j][i].setPieceAndColor(EMPTY, EMPTY_SQUARE);

	}
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
		{
			square[i][j].setX(i);
			square[i][j].setY(j);
		}

}

bool Board::playGame()
{
	system("cls");
	printBoard();
}