#include "header/main.h"

int main(int argc, char *argv[])
{
  int end = 0;

  int x1 = 1;
  int y1 = 1;
  int x2 = 7;
  int y2 = 3;
  int x3 = 5;
  int y3 = 1;

  int xDim = 10;
  int yDim = 10;
  int timer = 1;
  int direction = 0;

  MAP(10, 10) = {{9,7,7,7,7,7,7,7,7,9},
                {8,1,0,8,0,0,0,0,0,8},
                {8,0,0,0,0,0,0,0,0,8},
                {8,7,7,7,7,0,7,7,7,8},
                {8,0,0,0,0,0,0,0,0,8},
                {8,-1,7,7,7,7,7,7,7,8},
                {8,0,0,0,0,0,0,0,0,8},
                {8,0,0,1,0,0,7,1,7,8},
                {8,0,0,0,0,8,0,0,0,8},
                {9,7,7,7,7,7,7,7,7,9}};

  while(end != 1)
  { 
    materialize(xDim, yDim, matrix);
    direction = scan(x3, y3, matrix);
    move(direction, &x3, &y3, matrix);
    direction = scan(x1, y1, matrix);
    move(direction, &x1, &y1, matrix);
    direction = scan(x2, y2, matrix);
    move(direction, &x2, &y2, matrix);
    
    sleep_for(seconds(timer));

    end = 0;
  }
  return (0);
}