#include "TicTacToe.hpp"
#include <algorithm> 

TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

TicTacToe::TicTacToe(int size, char startingPlayer) : board(size, std::vector<char>(size, ' ')), currentPlayer(startingPlayer) {}

TicTacToe::TicTacToe(const TicTacToe& other) : board(other.board), currentPlayer(other.currentPlayer) {}

TicTacToe& TicTacToe::operator=(const TicTacToe& other) {
    if (this != &other) {
        board = other.board;
        currentPlayer = other.currentPlayer;
    }
    return *this;
}

bool TicTacToe::operator==(const TicTacToe& other) const {
    return board == other.board && currentPlayer == other.currentPlayer;
}

std::istream& operator>>(std::istream& in, TicTacToe& game) {
    for (auto& row : game.board) {
        for (auto& cell : row) {
            in >> cell;
        }
    }
    in >> game.currentPlayer;
    return in;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game) {
    for (const auto& row : game.board) {
        for (const auto& cell : row) {
            out << cell << " ";
        }
        out << "\n";
    }
    out << "Current Player: " << game.currentPlayer << "\n";
    return out;
}

void TicTacToe::displayBoard() const {
    std::cout << "  0 1 2\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << i << " ";
        for (int j = 0; j < 3; ++j) {
            std::cout << board[i][j];
            if (j < 2) std::cout << "|";
        }
        std::cout << "\n";
        if (i < 2) std::cout << "  -----\n";
    }
}

bool TicTacToe::placeMarker(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

bool TicTacToe::checkWin() const {
    auto isCompleteLine = [this](int i) {
        return std::all_of(board[i].begin(), board[i].end(), [this](char c) { return c == currentPlayer; });
    };
    
    for (int i = 0; i < 3; ++i) {
        if (isCompleteLine(i)) return true;
    }
    
    for (int i = 0; i < 3; ++i) {
        if (std::all_of(board.begin(), board.end(), [i, this](const std::vector<char>& row) { return row[i] == currentPlayer; })) return true;
    }
    
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) return true;
    
    return false;
}

bool TicTacToe::checkDraw() const {
    return std::none_of(board.begin(), board.end(), [](const std::vector<char>& row) {
        return std::any_of(row.begin(), row.end(), [](char cell) { return cell == ' '; });
    });
}

void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

char TicTacToe::getCurrentPlayer() const {
    return currentPlayer;
}

void TicTacToe::applyAlgorithmicActions() {
    std::cout << "Verificare câștigător pe linii și coloane:\n";
    if (checkWin()) {
        std::cout << "Player " << currentPlayer << " wins!" << std::endl;
    } else if (checkDraw()) {
        std::cout << "It's a draw!" << std::endl;
    }

    std::cout << "Tabla curentă: \n";
    std::for_each(board.begin(), board.end(), [](const std::vector<char>& row) {
        std::for_each(row.begin(), row.end(), [](char cell) { std::cout << cell << " "; });
        std::cout << "\n";
    });
}
