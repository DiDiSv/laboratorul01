#include <gtest/gtest.h>
#include "../include/TicTacToe.hpp"  // Include fișierul header TicTacToe

// Testează constructorul implicit
TEST(TicTacToeTest, DefaultConstructor) {
    TicTacToe game;
    ASSERT_EQ(game.getCurrentPlayer(), 'X');  // Verifică dacă jucătorul curent este 'X'
}

// Testează constructorul cu parametri
TEST(TicTacToeTest, ConstructorWithParams) {
    TicTacToe game(4, 'O');
    ASSERT_EQ(game.getCurrentPlayer(), 'O');  // Verifică dacă jucătorul curent este 'O'
}

// Testează plasarea unui marker
TEST(TicTacToeTest, PlaceMarkerValidMove) {
    TicTacToe game;
    ASSERT_TRUE(game.placeMarker(0, 0));  // Plasează un marker pe poziția (0, 0)
}

// Testează un câștig
TEST(TicTacToeTest, CheckWin) {
    TicTacToe game;
    game.placeMarker(0, 0);
    game.placeMarker(1, 1);
    game.placeMarker(0, 1);
    game.placeMarker(2, 2);
    game.placeMarker(0, 2);  // Căutăm un câștig pe prima linie
    ASSERT_TRUE(game.checkWin());  // Verifică dacă există un câștigător
}

// Testează remiza
TEST(TicTacToeTest, CheckDraw) {
    TicTacToe game;
    game.placeMarker(0, 0);
    game.placeMarker(0, 1);
    game.placeMarker(0, 2);
    game.placeMarker(1, 0);
    game.placeMarker(1, 2);
    game.placeMarker(1, 1);
    game.placeMarker(2, 2);
    game.placeMarker(2, 1);
    game.placeMarker(2, 0);  // Toate pozițiile sunt ocupate
    ASSERT_TRUE(game.checkDraw());  // Verifică dacă jocul este un egal
}
