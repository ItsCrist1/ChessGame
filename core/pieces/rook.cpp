#include "rook.h"
#include <array>

Rook::Rook(const Position& pos, const Color& col) : Piece(pos,col) {}

std::vector<Move> Rook::getPossibleMoves(const Board& board) const {
    std::vector<Move> moves;
    const std::array<std::pair<i8,i8>, 4> p = {{
        { 0, 1 }, { 0, -1}, { 1, 0}, { -1, 0}
    }};

    for(u8 i=0; i < 4; ++i) {
        // TODO
    }

    return moves;
}