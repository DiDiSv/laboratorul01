#include "Player.hpp"
#include "TicTacToe.hpp"

int main() {
    TicTacToe game;
    Player playerX('X');
    Player playerO('O');
    
    game.displayBoard();
    
    return 0;
}
