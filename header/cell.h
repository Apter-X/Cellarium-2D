#ifndef DEF_CELL
#define DEF_CELL

#include <stdio.h>
#include <stdlib.h>

#include <time.h> //for randomizing

class Cell
{
  public:

  int scan(int matrix[][10]);
  void move(int direction, int matrix[][10]);

  // bool alive;
  int x_position;
  int y_position;

  Cell(int x, int y) { // Constructor with parameters
      x_position = x;
      y_position = y;
  }
};

#endif