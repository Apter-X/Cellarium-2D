#include <stdio.h>
#include <stdlib.h>

void materialize(int dimensionX, int dimensionY, int tableau[][3])
{
  for(int i = 0; i < dimensionY; i++)
  {
    for(int j = 0; j < dimensionX; j++)
    {
      if(tableau[i][j] == 0)
        printf(" ");

      if(tableau[i][j] == 1)
        printf("*");
    }
    printf("\n");
  }
}