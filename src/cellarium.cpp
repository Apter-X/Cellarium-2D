#include "../header/cellarium.h"

void Cellarium::materialize(int dimensionX, int dimensionY, int matrix[][10])
{
  system ("cls");
  printf("|Cellarium 2D|\n");

  //Make it visual
  for(int i = 0; i < dimensionY; i++)
  {
    for(int j = 0; j < dimensionX; j++)
    { 
      if(matrix[i][j] == 0)
        printf(" ");

      if(matrix[i][j] == 1)
        printf(".");

      if(matrix[i][j] == 2)
        printf("*");

      if(matrix[i][j] == 3)
        printf("#");
        
      if(matrix[i][j] == 9)
        printf("o");

      if(matrix[i][j] == 8)
        printf("|");

      if(matrix[i][j] == 7)
        printf("-");

      if(matrix[i][j] == -1)
        printf("\033[1;31mx\033[0m");
    }
    printf("\n");
  }
}