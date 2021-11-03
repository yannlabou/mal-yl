CXX = g++-10
CXXFLAGS = -std=c++17 -g -Wall -Wextra -Werror -Wpedantic
srcfiles = step0_repl.cpp step1_read_print.cpp
BIN_DIR  = ./bin
objects  = $(patsubst %.cpp, %.o, $(srcfiles))
targets  = $(patsubst %.o, %, $(objects))

all: step0_repl step1_read_print
step0_repl:
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$@ step0_repl.cpp
step1_read_print:
	mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$@ step1_read_print.cpp
clean:
	rm -rf $(BIN_DIR)