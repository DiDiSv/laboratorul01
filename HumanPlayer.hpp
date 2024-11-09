#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP

#include "Player.hpp"
#include <iostream>
#include <string> 

class HumanPlayer : public Player {
public:
    HumanPlayer(char marker) : Player(marker) {}

    void makeMove() const override {
        std::string message = "Player " + std::string(1, getMarker()) + " makes a move!";
        std::cout << message << std::endl;
    }
};

#endif
