#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
private:
    char marker;

public:
    Player(char marker);
    char getMarker() const;
};

#endif // PLAYER_HPP
