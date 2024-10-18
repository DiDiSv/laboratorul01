#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP

#include "Player.hpp"
#include <iostream>

class HumanPlayer : public Player {
public:
    HumanPlayer(char marker) : Player(marker) {}

    void makeMove() const override {
        std::cout << "Player " << getMarker() << " makes a move!" << std::endl;
    }
};

#endif
