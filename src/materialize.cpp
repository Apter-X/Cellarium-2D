#include "../header/materialize.h"

void materialize(int dimensionX, int dimensionY, int tableau[][10])
{
  system ("clear");
  printf("|Cellarium 2D|\n");

  //Make it visual
  for(int i = 0; i < dimensionY; i++)
  {
    for(int j = 0; j < dimensionX; j++)
    { 
      if(tableau[i][j] == 0)
        printf(" ");

      if(tableau[i][j] == 1)
        printf(".");

      if(tableau[i][j] == 2)
        printf("*");

      if(tableau[i][j] == 3)
        printf("#");
        
      if(tableau[i][j] == 9)
        printf("o");

      if(tableau[i][j] == 8)
        printf("|");

      if(tableau[i][j] == 7)
        printf("-");

      if(tableau[i][j] == -1)
        printf("x");
    }
    printf("\n");
  }
}