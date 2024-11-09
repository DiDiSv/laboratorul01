#include "TicTacToe.hpp"
#include "HumanPlayer.hpp"

int main() {
    // Crearea unui joc și a două instanțe de jucători
    TicTacToe game;
    HumanPlayer playerX('X');
    HumanPlayer playerO('O');

    // Afișarea tablei de joc
    game.displayBoard();

    // Realizarea unui prim pas
    playerX.makeMove();
    game.placeMarker(0, 0);
    game.displayBoard();

    // Realizarea unui al doilea pas
    playerO.makeMove();
    game.placeMarker(1, 1);
    game.displayBoard();

    return 0;
}
