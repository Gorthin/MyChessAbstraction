#ifndef CHESSPIECE_H
#define CHESSPIECE_H

#include "Color.h"

/**
 *  @file   ChessPiece.h
 *  @brief  Enumeration which represents piece type of figures
 *  @author Adrian Janiak
 *  @date   14-08-2023
 ***********************************************/
enum Piece {
	KING,
	QUEEN,
	BISHOP,
	KNIGHT,
	ROOK,
	PAWN,
	EMPTY
};

#endif // CHESSPIECE_H