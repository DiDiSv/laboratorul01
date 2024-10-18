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

    TicTacToe(int size, char startingPlayer);

    TicTacToe(const TicTacToe& other);

    TicTacToe& operator=(const TicTacToe& other);

    bool operator==(const TicTacToe& other) const;

    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);

    void displayBoard() const;
    bool placeMarker(int row, int col);
    bool checkWin() const;
    bool checkDraw() const;
    void switchPlayer();
    char getCurrentPlayer() const;
};

#endif 
