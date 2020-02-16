#include <stdio.h>
#include <stdlib.h>
#include <chrono> //timer
#include <thread> //timer

#include "header/scan.h"
#include "header/apax.h"
#include "header/materialize.h"

void materialize();
int scan();
void move(int direction, int *xPosition, int *yPosition,int tableau[][10]);

int main(int argc, char *argv[])
{
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

  int end = 0;
  int x1 = 1;
  int y1 = 1;
  int x2 = 2;
  int y2 = 2;
  int x3 = 3;
  int y3 = 3;
  int xDim = 10;
  int yDim = 10;
  int timer = 2;
  int direction = 0;

  int matrix[10][10] = {{9,7,7,7,7,7,7,7,7,9},
                        {8,1,0,0,0,0,0,0,0,8},
                        {8,0,1,-1,0,0,0,0,0,8},
                        {8,0,0,1,0,0,0,0,0,8},
                        {8,0,0,0,0,0,0,0,0,8},
                        {8,0,0,0,0,0,0,0,0,8},
                        {8,0,0,0,0,0,0,0,0,8},
                        {8,0,0,0,0,0,0,0,0,8},
                        {8,0,0,0,0,0,0,0,0,8},
                        {9,7,7,7,7,7,7,7,7,9}};

  while(end != 1)
  { 
    materialize(xDim, yDim, matrix);
    direction = scan(x1, y1, matrix);
    move(direction, &x1, &y1, matrix);
    direction = scan(x2, y2, matrix);
    move(direction, &x2, &y2, matrix);
    direction = scan(x3, y3, matrix);
    move(direction, &x3, &y3, matrix);
    sleep_for(seconds(timer));

    end = 0;
  }
  return (0);
}