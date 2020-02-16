#include <stdio.h>
#include <stdlib.h>

//Lis le tableau en parametre et change chaque chiffre par une forme
void materialize(int dimensionX, int dimensionY, int tableau[][5])
{
  system ("clear");
  printf("|Cellarium 2D|\n");

  for(int i = 0; i < dimensionY; i++)
  {
    for(int j = 0; j < dimensionX; j++)
    { 
      if(tableau[i][j] == 0)
        printf(" ");

      if(tableau[i][j] == 1)
        printf("*");
        
      if(tableau[i][j] == 9)
        printf("o");

      if(tableau[i][j] == 8)
        printf("|");

      if(tableau[i][j] == 7)
        printf("-");

      if(tableau[i][j] == -1)
        printf("#");
    }
    printf("\n");
  }
}