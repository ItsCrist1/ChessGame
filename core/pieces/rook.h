#pragma once
#include "piece.h"

class Rook : public Piece {
    Rook(const Position&, const Color&);
    
    std::vector<Move> getPossibleMoves(const Board&) const override;
};