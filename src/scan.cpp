#include <stdio.h>
#include <stdlib.h>

//Analyse les cases autour de sa position
int scan(int Xposition, int Yposition, int tableau[][3])
{
  int bottom = tableau[Xposition+1][Yposition];
  int top = tableau[Xposition-1][Yposition];
  int left = tableau[Xposition][Yposition+1];
  int right = tableau[Xposition][Yposition-1];
  
  printf("bottom = %d\n", bottom);
  printf("top = %d\n", top);
  printf("left = %d\n", left);
  printf("right = %d\n", right);
  
  return 0;
}