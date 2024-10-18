# Tic Tac Toe

Proiectul **Tic Tac Toe** reprezintă implementarea jocului clasic de strategie pe o tablă de 3x3, unde doi jucători, pe rând, plasează fie un "X", fie un "O" pe tablă. Scopul este ca unul dintre jucători să aranjeze trei simboluri identice pe orizontală, verticală sau diagonală înainte ca adversarul să reușească același lucru.

## Regulile jocului

- Jocul este pentru doi jucători, unul folosind simbolul "X", iar celălalt "O".
- Jocul se desfășoară pe o tablă de 3x3.
- Jucătorii plasează alternativ simbolul lor într-unul dintre cele 9 spații libere.
- Obiectivul fiecărui jucător este de a plasa trei simboluri consecutive fie pe orizontală, verticală, sau diagonală.
- Jocul se termină atunci când unul dintre jucători reușește să plaseze trei simboluri consecutive sau când tabla este completă fără un câștigător, caz în care jocul se termină cu o remiză.

---

## Fișierul `TicTacToe.hpp`

### `TicTacToe`
Clasă care gestionează logica jocului.

- `std::vector<std::vector<char>> board`: Tabla de joc 3x3 (matrice de caractere).
- `char currentPlayer`: Simbolul jucătorului curent ('X' sau 'O').

---

## Fișierul `Player.hpp`

### `Player`
Clasă care reprezintă un jucător.

- `char marker`: Simbolul jucătorului ('X' sau 'O').

---

## Modul de Construire

Acest proiect poate fi construit folosind sistemul de compilare `Make`. Urmați pașii de mai jos pentru a construi și rula jocul pe sistemul dumneavoastră.

### Cerințe

Asigurați-vă că aveți următoarele instalate pe sistemul dumneavoastră:

- [g++] - compilator C++ (parte din [MinGW](https://www.mingw-w64.org/) sau [MSYS2](https://www.msys2.org/))

### Construirea Proiectului

1. **Deschideți terminalul** (Command Prompt sau MSYS2).

2. **Navigați la directorul proiectului**:
```bash
   cd C:\Users\DiDi\laboratorul01
```
3. **Construiește proiectul. Rulează comanda make pentru a compila fișierele sursă. Aceasta va genera fișierul executabil TicTacToe:**:
```bash
   make
```
4. **Curăță fișierele generate. Dacă dorești să ștergi fișierele obiect generate în timpul construcției, poți folosi comanda**:
```bash
   make clean
```
5.**Execută programul. După ce construcția a fost realizată cu succes, poți rula programul executabil**:
```bash
./TicTacToe
```