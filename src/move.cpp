#include <stdio.h>
#include <stdlib.h>

void move(int direction, int *xPosition, int *yPosition,int tableau[][5])
{
  int xPos = *xPosition;
  int yPos = *yPosition;

  int cell = tableau[xPos][yPos];

  switch(direction) 
  {
    case 1: //bottom
      tableau[xPos][yPos] -= cell;
      xPos++;
      tableau[xPos][yPos] += cell;
      break;
    case 2: //top
      tableau[xPos][yPos] -= cell;
      xPos--;
      tableau[xPos][yPos] += cell;
      break;
    case 3: //right
      tableau[xPos][yPos] -= cell;
      yPos++;
      tableau[xPos][yPos] += cell;
      break;
    case 4: //left
      tableau[xPos][yPos] -= cell;
      yPos--;
      tableau[xPos][yPos] += cell;
      break;
    default:
      printf("ERROR MOVE");
  }
  *xPosition = xPos;
  *yPosition = yPos;
}