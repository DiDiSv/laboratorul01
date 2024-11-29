SFML_DIR = ./libs/SFML

LIBS_DIR = ./libs

SRC_DIR = ./src

INCLUDE_DIR = ./include

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/Player.cpp $(SRC_DIR)/TicTacToe.cpp

OBJ = $(SRC:.cpp=.o)

EXEC = main

CXX = g++
CXXFLAGS = -std=c++17 -I$(INCLUDE_DIR) -I$(SFML_DIR)/include

LDFLAGS = -L$(LIBS_DIR) -L$(SFML_DIR)/lib -lsfml-graphics -lsfml-window -lsfml-system -lplayer -ltictactoe

$(EXEC): $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
