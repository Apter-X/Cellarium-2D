#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>

#include "header/scan.h"
#include "header/apax.h"
#include "header/materialize.h"

int scan(int Xposition, int Yposition, int tableau[][3]);
void materialize(int tableau[][3]);

int main(int argc, char *argv[])
{
  using namespace std::this_thread; // sleep_for, sleep_until
  using namespace std::chrono; // nanoseconds, system_clock, seconds

  int end = 0;
  int x = 0;
  int y = 0;

  int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

  while(end != 1)
  {
    int i = 0;

    system ("clear");
    materialize(3, 3, matrix);
    printf("position %d,%d\n", x, y);
    sleep_for(seconds(2));
    system ("clear");
   

    while(i < 2)
    {
      matrix[x][y] = 0;
      x++;
      matrix[x][y] = 1;
      i++;
      materialize(3, 3, matrix);
      printf("position %d,%d\n", x, y);
      sleep_for(seconds(2));
      system ("clear");
    }

    while(i > 0)
    {
      matrix[x][y] = 0;
      y++;
      matrix[x][y] = 1;
      i--;
      materialize(3, 3, matrix);
      printf("position %d,%d\n", x, y);
      sleep_for(seconds(2));
      system ("clear");
    }
        
    while(i < 2)
    {
      matrix[x][y] = 0;
      x--;
      matrix[x][y] = 1;
      i++;
      materialize(3, 3, matrix);
      printf("position %d,%d\n", x, y);
      sleep_for(seconds(2));
      system ("clear");
    }

    while(i > 0)
    {
      matrix[x][y] = 0;
      y--;
      matrix[x][y] = 1;
      i--;
      materialize(3, 3, matrix);
      printf("position %d,%d\n", x, y);
      sleep_for(seconds(2));
      system ("clear");
    }
        
    end = 1;
  }

  scan(x, y, matrix);

  return (0);
}