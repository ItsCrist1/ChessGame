#pragma once
#include "utils.h"
#include <string>

class Position {
private:
    u8 x, y;

public:
    Position(const u8, const u8);
    std::string getNotation() const;
    
    u8 getX() const;
    u8 getY() const;

    bool operator==(const Position&) const;
    bool isValid() const;
};

class Move {
private:
    Position origin, destination;

public:
    Move(const Position&, const Position&);
    
    Position getOrigin() const;
    Position getDestination() const;
};