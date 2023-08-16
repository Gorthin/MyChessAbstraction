#ifndef COLOR_H
#define COLOR_H




/**
 *  @file   Color.h
 *  @brief  Enumeration which represents piece colors
 *  @author Adrian Janiak
 *  @date   14-08-2023
 ***********************************************/
enum Color {
    WHITE_SQUARE = 0xDB, ///< this is white color for piece
    BLACK_SQUARE = 0xFF, ///< this is black color for piece
    EMPTY_SQUARE = 0x20 ///< this is invisible piece, means no piece on field
};

#endif // COLOR_H