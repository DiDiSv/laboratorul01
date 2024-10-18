#include "TicTacToe.hpp"
#include "HumanPlayer.hpp"

int main() {
    TicTacToe game;
    HumanPlayer playerX('X');
    HumanPlayer playerO('O');

    game.displayBoard();

    playerX.makeMove();
    game.placeMarker(0, 0);
    game.displayBoard();

    playerO.makeMove();
    game.placeMarker(1, 1);
    game.displayBoard();

    return 0;
}
