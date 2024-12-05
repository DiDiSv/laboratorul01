/**
 * @file Player.hpp
 * @brief Fișierul antet pentru clasa Player, care reprezintă un jucător generic în jocul TicTacToe.
 * @proiect Jocul TicTacToe
 * @autor Samcov Daniela
 * @an 2024
 */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>

/**
 * @class Player
 * @brief Reprezintă un jucător în jocul TicTacToe.
 */
class Player {
private:
    char marker; ///< Simbolul jucătorului (X sau O).

public:
    /**
     * @brief Constructor implicit pentru un jucător.
     */
    Player();

    /**
     * @brief Constructor care inițializează jucătorul cu un marker.
     * @param marker Simbolul jucătorului (X sau O).
     */
    Player(char marker);

    /**
     * @brief Constructor de copiere pentru un jucător.
     * @param other Alt jucător care va fi copiat.
     */
    Player(const Player& other);

    /**
     * @brief Suprascrierea operatorului de atribuire pentru clasa Player.
     * @param other Alt jucător care va fi atribuit.
     * @return Referința către obiectul curent.
     */
    Player& operator=(const Player& other);

    /**
     * @brief Suprascrierea operatorului de comparație pentru clasa Player.
     * @param other Alt jucător cu care se face comparația.
     * @return True dacă jucătorii sunt egali, false altfel.
     */
    bool operator==(const Player& other) const;

    /**
     * @brief Suprascrierea operatorului de intrare pentru citirea unui jucător dintr-un flux.
     * @param in Fluxul de intrare.
     * @param player Jucătorul care va fi citit.
     * @return Fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, Player& player);

    /**
     * @brief Suprascrierea operatorului de ieșire pentru afișarea unui jucător.
     * @param out Fluxul de ieșire.
     * @param player Jucătorul care va fi afișat.
     * @return Fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const Player& player);

    /**
     * @brief Obține simbolul jucătorului.
     * @return Simbolul jucătorului (X sau O).
     */
    char getMarker() const;

    /**
     * @brief Funcție virtuală pură care definește mișcarea jucătorului.
     * Aceasta trebuie implementată în clasele derivate.
     */
    virtual void makeMove() const = 0; 
};

#endif // PLAYER_HPP
