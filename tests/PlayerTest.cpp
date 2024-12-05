#include <gtest/gtest.h>
#include "../include/Player.hpp"  // Include fișierul header Player

// Testează constructorul Player
TEST(PlayerTest, Constructor) {
    Player player('X');
    ASSERT_EQ(player.getMarker(), 'X');  // Verifică dacă markerul jucătorului este 'X'
}

// Testează operatorul de comparare
TEST(PlayerTest, EqualityOperator) {
    Player player1('X');
    Player player2('X');
    Player player3('O');
    ASSERT_TRUE(player1 == player2);  // Verifică dacă cei doi jucători sunt egali
    ASSERT_FALSE(player1 == player3);  // Verifică dacă cei doi jucători nu sunt egali
}
