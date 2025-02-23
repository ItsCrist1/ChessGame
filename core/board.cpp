#include "board.h"

Board::Board(const std::vector<std::vector<std::shared_ptr<Piece>>>& board) : board(board) {}
Board::Board() : board(BOARD_SIZE, std::vector<std::shared_ptr<Piece>>(BOARD_SIZE)) {}

std::shared_ptr<Piece>& Board::getPiece(const Position& pos) {
    return board[pos.getY()][pos.getX()];
}

void Board::doMove(const Move& move) {
    std::shared_ptr<Piece>& piece = getPiece(move.getOrigin());

    getPiece(move.getDestination()) = piece;
    piece = nullptr;
}