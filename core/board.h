#pragma once
#include "pieces/piece.h"
#include <vector>
#include <memory>

class Board {
private:
    std::vector<std::vector<std::shared_ptr<Piece>>> board;
    static const u8 BOARD_SIZE = 8;

public:
    Board(const std::vector<std::vector<std::shared_ptr<Piece>>>&);
    Board(const u8);

    std::shared_ptr<Piece> getPiece(const u8, const u8) const;
};