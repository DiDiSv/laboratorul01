all: tictactoe.exe

tictactoe.exe: Player.o TicTacToe.o main.o
	g++ -o tictactoe.exe Player.o TicTacToe.o main.o

Player.o:
	g++ -c Player.cpp -o Player.o

TicTacToe.o:
	g++ -c TicTacToe.cpp -o TicTacToe.o

main.o:
	g++ -c main.cpp -o main.o

clean:
	del *.o *.exe
