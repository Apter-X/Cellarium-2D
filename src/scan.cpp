#include <stdio.h>
#include <stdlib.h>

//Analyse les cases autour de sa position
int scan(int xPosition, int yPosition, int tableau[][5])
{
  int direction = 0;

  int bottom = tableau[xPosition+1][yPosition];
  int top = tableau[xPosition-1][yPosition];
  int right = tableau[xPosition][yPosition+1];
  int left = tableau[xPosition][yPosition-1];

  printf("Scaner :\n");
  printf("position %d,%d\n", xPosition, yPosition);
  printf("bottom = %d\n", bottom);
  printf("top = %d\n", top);
  printf("right = %d\n", right);
  printf("left = %d\n", left);

  if(bottom <= 6 || bottom >= 0)
  {
    return (direction = 1);
  }

  else if(top <= 6 || top >= 0)
  {
    return (direction = 2);
  }

  else if(right <= 6 || right >= 0)
  {
    return (direction = 3);
  }

  else if(left <= 6 || left >= 0)
  {
    return (direction = 4);
  }
  return direction;  
}