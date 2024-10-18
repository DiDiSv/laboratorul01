#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>

class Player {
private:
    char marker;

public:
    Player();

    Player(char marker);

    Player(const Player& other);

    Player& operator=(const Player& other);

    bool operator==(const Player& other) const;

    friend std::istream& operator>>(std::istream& in, Player& player);

    friend std::ostream& operator<<(std::ostream& out, const Player& player);

    char getMarker() const;
};

#endif 
