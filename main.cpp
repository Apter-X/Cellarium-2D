#include <stdio.h>
#include <stdlib.h>
#include <chrono> //timer
#include <thread> //timer

#include "header/scan.h"
#include "header/apax.h"
#include "header/materialize.h"

void materialize();
int scan();
void move(int direction, int *xPosition, int *yPosition,int tableau[][5]);

int main(int argc, char *argv[])
{
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

  int end = 0;
  int x = 1;
  int y = 1;

  int xDim = 5;
  int yDim = 5;

  int timer = 2;

  int direction;

  int matrix[5][5] = {{9,7,7,7,9},
                      {8,1,-1,0,8},
                      {8,0,0,0,8},
                      {8,0,0,0,8},
                      {9,7,7,7,9}};

  materialize(xDim, yDim, matrix);
  scan(x, y, matrix);

  while(end != 1)
  { 
    materialize(xDim, yDim, matrix);
    direction = scan(x, y, matrix);
    sleep_for(seconds(timer));
    move(direction, &x, &y, matrix);

    end = 0;
  }
  return (0);
}