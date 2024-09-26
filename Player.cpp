#include "Player.hpp"

// Constructor care inițializează markerul jucătorului
Player::Player(char marker) : marker(marker) {}

// Returnează markerul jucătorului
char Player::getMarker() const {
    return marker;
}
