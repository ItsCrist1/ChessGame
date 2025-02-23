#pragma once
#include "board.h"
#include <vector>

class Piece {
protected:
    Position pos;
    Color col;
public:
    Piece(const Position&, const Color&);
    virtual std::vector<Move> getPossibleMoves(const Board&) const = 0;
    virtual ~Piece() = default;

    Position getPos() const;
    Color getCol() const;
    void setPos(const Position&);
};