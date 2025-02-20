#include "board.h"

Board::Board(const std::vector<std::vector<std::shared_ptr<Piece>>>& board) : board(board) {}
Board::Board(const u8 size) : board(size, std::vector<std::shared_ptr<Piece>>(size)) {}

std::shared_ptr<Piece> Board::getPiece(const u8 x, const u8 y) const {
    return board[x][y];
}