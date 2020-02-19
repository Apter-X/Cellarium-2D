#include "../header/move.h"

void move(int direction, int *xPosition, int *yPosition,int tableau[][10])
{
  int xPos = *xPosition;
  int yPos = *yPosition;

  int cell = tableau[xPos][yPos];

  //Move in a direction
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
      printf("ERROR MOVE!");
  }
  *xPosition = xPos;
  *yPosition = yPos;
}