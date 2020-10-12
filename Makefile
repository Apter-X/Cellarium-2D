CXX = g++
CXXFLAGS = -Wall -g -o
OBJ_FILES = *.o
SRC = src/*.cpp
EXC = Cellarium-2D.exe

all : prog

prog : main.o src
	$(CXX) $(CXXFLAGS) Cellarium-2D $(OBJ_FILES)

main.o : main.cpp
	$(CXX) -c main.cpp

src : $(SRC)
	$(CXX) -c $(SRC)

clean :
	del $(OBJ_FILES)

mrproper : clean
	del $(EXC)