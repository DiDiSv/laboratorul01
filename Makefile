CXX = g++
CXXFLAGS = -I./include -I./libs/SFML/include -I./libs/googletest/googletest/include  # Include Google Test

LDFLAGS = -L./libs/SFML/lib -L./libs/googletest/googletest/lib -lgtest -lgtest_main -pthread

SRC = src/main.cpp src/TicTacToe.cpp src/Player.cpp
OBJ = $(SRC:.cpp=.o)

# Teste
TEST_SRC = tests/TicTacToeTest.cpp tests/PlayerTest.cpp
TEST_OBJ = $(TEST_SRC:.cpp=.o)
TEST_EXEC = test_game

OUT = TicTacToe

$(OUT): $(OBJ)
	$(CXX) $(OBJ) -o $(OUT) $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tests/%.o: tests/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(OBJ) $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(OBJ) $(TEST_OBJ) $(LDFLAGS)
	./$(TEST_EXEC)

clean:
	rm -f $(OBJ) $(TEST_OBJ) $(OUT) $(TEST_EXEC)
