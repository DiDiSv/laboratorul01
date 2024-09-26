#include "TicTacToe.hpp"

// Constructor care inițializează tabla și setările de început
TicTacToe::TicTacToe() : board(3, std::vector<char>(3, ' ')), currentPlayer('X') {}

// Afișează tabla de joc
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

// Plasează un marker pe tablă, returnează true dacă mutarea este validă
bool TicTacToe::placeMarker(int row, int col) {
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

// Verifică dacă un jucător a câștigat
bool TicTacToe::checkWin() const {
    // Verificăm liniile
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true;
    }
    // Verificăm coloanele
    for (int i = 0; i < 3; ++i) {
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
            return true;
    }
    // Verificăm diagonalele
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true;

    return false;
}

// Verifică dacă jocul este egal (fără câștigător)
bool TicTacToe::checkDraw() const {
    for (const auto& row : board) {
        for (char cell : row) {
            if (cell == ' ') {
                return false;  // Încă mai sunt mutări disponibile
            }
        }
    }
    return true;
}

// Schimbă jucătorul curent
void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

// Returnează jucătorul curent
char TicTacToe::getCurrentPlayer() const {
    return currentPlayer;
}
