#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <iostream>
#include <vector>

class TicTacToe {
private:
    std::vector<std::vector<char>> board;
    char currentPlayer;

public:
    TicTacToe();
    void displayBoard() const;
    bool placeMarker(int row, int col);
    bool checkWin() const;
    bool checkDraw() const;
    void switchPlayer();
    char getCurrentPlayer() const;
};

#endif // TICTACTOE_HPP
