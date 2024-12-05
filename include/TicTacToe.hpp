/**
 * @file TicTacToe.hpp
 * @brief Fișierul antet pentru clasa TicTacToe, care gestionează logica jocului TicTacToe.
 * @proiect Jocul TicTacToe
 * @autor Samcov Daniela
 * @an 2024
 */

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <iostream>
#include <vector>
#include <algorithm> 

/**
 * @class TicTacToe
 * @brief Reprezintă jocul TicTacToe și gestionează tabla de joc și acțiunile.
 */
class TicTacToe {
private:
    std::vector<std::vector<char>> board; ///< Tabla de joc.
    char currentPlayer; ///< Jucătorul curent (X sau O).

public:
    /**
     * @brief Constructor implicit care inițializează o tablă de joc de 3x3 cu jucătorul 'X' ca jucătorul de început.
     */
    TicTacToe();

    /**
     * @brief Constructor care permite setarea dimensiunii tablei de joc și a jucătorului de început.
     * @param size Dimensiunea tablei de joc.
     * @param startingPlayer Jucătorul care începe jocul.
     */
    TicTacToe(int size, char startingPlayer);

    /**
     * @brief Constructor de copiere pentru clasa TicTacToe.
     * @param other Alt obiect TicTacToe care va fi copiat.
     */
    TicTacToe(const TicTacToe& other);

    /**
     * @brief Suprascrierea operatorului de atribuire pentru clasa TicTacToe.
     * @param other Alt obiect TicTacToe care va fi atribuit.
     * @return Referința către obiectul curent.
     */
    TicTacToe& operator=(const TicTacToe& other);

    /**
     * @brief Suprascrierea operatorului de comparație pentru clasa TicTacToe.
     * @param other Alt obiect TicTacToe cu care se face comparația.
     * @return True dacă jocurile sunt egale, false altfel.
     */
    bool operator==(const TicTacToe& other) const;

    /**
     * @brief Suprascrierea operatorului de intrare pentru citirea unui obiect TicTacToe dintr-un flux.
     * @param in Fluxul de intrare.
     * @param game Obiectul TicTacToe care va fi citit.
     * @return Fluxul de intrare.
     */
    friend std::istream& operator>>(std::istream& in, TicTacToe& game);

    /**
     * @brief Suprascrierea operatorului de ieșire pentru afișarea unui obiect TicTacToe.
     * @param out Fluxul de ieșire.
     * @param game Obiectul TicTacToe care va fi afișat.
     * @return Fluxul de ieșire.
     */
    friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);

    /**
     * @brief Afișează tabla de joc.
     */
    void displayBoard() const;

    /**
     * @brief Plasează un marker pe tablă.
     * @param row Linia pe care se plasează markerul.
     * @param col Coloana pe care se plasează markerul.
     * @return True dacă mișcarea a fost validă, false altfel.
     */
    bool placeMarker(int row, int col);

    /**
     * @brief Verifică dacă există un câștigător.
     * @return True dacă există un câștigător, false altfel.
     */
    bool checkWin() const;

    /**
     * @brief Verifică dacă jocul s-a încheiat cu o remiză.
     * @return True dacă jocul este un egal, false altfel.
     */
    bool checkDraw() const;

    /**
     * @brief Schimbă jucătorul curent.
     */
    void switchPlayer();

    /**
     * @brief Obține jucătorul curent.
     * @return Simbolul jucătorului curent (X sau O).
     */
    char getCurrentPlayer() const;

    /**
     * @brief Aplicați acțiuni algoritmice (de exemplu, mișcări automate sau logica jocului).
     */
    void applyAlgorithmicActions();  
};

#endif // TICTACTOE_HPP
