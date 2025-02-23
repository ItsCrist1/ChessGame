#include "piece.h"

Piece::Piece(const Position& pos, const Color& col) : pos(pos), col(col) {}

Position Piece::getPos() const { return pos; }
Color Piece::getCol() const { return col; }
void Piece::setPos(const Position& npos) { pos = npos; }