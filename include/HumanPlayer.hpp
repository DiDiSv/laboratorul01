/**
 * @file HumanPlayer.hpp
 * @brief Fișierul antet pentru clasa HumanPlayer, care reprezintă un jucător uman.
 * @proiect Jocul TicTacToe
 * @autor Samcov Daniela
 * @an 2024
 */

#ifndef HUMANPLAYER_HPP
#define HUMANPLAYER_HPP

#include "Player.hpp"
#include <iostream>
#include <string> 

/**
 * @class HumanPlayer
 * @brief Reprezintă un jucător uman care poate face mișcări în jocul TicTacToe.
 */
class HumanPlayer : public Player {
public:
    /**
     * @brief Constructor pentru jucătorul uman.
     * @param marker Simbolul jucătorului (X sau O).
     */
    HumanPlayer(char marker) : Player(marker) {}

    /**
     * @brief Implementarea funcției makeMove pentru jucătorul uman.
     * Afișează un mesaj că jucătorul uman a făcut o mișcare.
     */
    void makeMove() const override {
        std::string message = "Player " + std::string(1, getMarker()) + " makes a move!";
        std::cout << message << std::endl;
    }
};

#endif // HUMANPLAYER_HPP
