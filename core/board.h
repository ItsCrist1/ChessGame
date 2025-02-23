#pragma once
#include "position.h"
#include "pieces/piece.h"
#include <vector>
#include <memory>

class Board {
private:
    std::vector<std::vector<std::shared_ptr<Piece>>> board;

public:
    Board(const std::vector<std::vector<std::shared_ptr<Piece>>>&);
    Board();

    std::shared_ptr<Piece>& getPiece(const Position&);
    void doMove(const Move&);
};