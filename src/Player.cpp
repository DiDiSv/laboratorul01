#include "Player.hpp"

Player::Player() : marker(' ') {}

Player::Player(char marker) : marker(marker) {}

Player::Player(const Player& other) : marker(other.marker) {}

Player& Player::operator=(const Player& other) {
    if (this != &other) {
        marker = other.marker;
    }
    return *this;
}

bool Player::operator==(const Player& other) const {
    return marker == other.marker;
}

std::istream& operator>>(std::istream& in, Player& player) {
    in >> player.marker;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Player& player) {
    out << player.marker;
    return out;
}

char Player::getMarker() const {
    return marker;
}
