#include "position.h"

Position::Position(const u8 x, const u8 y) : x(x), y(y) {}

std::string Position::getNotation() const {
    return std::string(1, 'a'+x) + std::to_string(y + 1);
}

u8 Position::getX() const { return x; }
u8 Position::getY() const { return y; }

bool Position::operator==(const Position& p) const { 
    return x == p.getX() && y == p.getY(); 
}

bool Position::isValid() const { return x < 8 && y < 8; }

Move::Move(const Position& origin, const Position& destination) 
: origin(origin), destination(destination) {}

Position Move::getOrigin() const { return origin; }
Position Move::getDestination() const { return destination; }