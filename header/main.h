#include <stdio.h>
#include <stdlib.h>
#include <chrono> //timer
#include <thread> //timer

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#include "cell.h"
#include "cellarium.h"

int matrix[10][10] = {{9,7,7,7,7,7,7,7,7,9},
                      {8,1,8,0,0,0,0,8,0,8},
                      {8,0,0,0,0,0,0,-1,0,8},
                      {8,7,7,7,7,0,7,7,7,8},
                      {8,0,0,0,-1,0,0,0,0,8},
                      {8,-1,7,7,7,7,7,7,7,8},
                      {8,0,0,0,1,0,0,0,0,8},
                      {8,7,7,1,0,0,7,0,7,8},
                      {8,0,0,0,0,8,0,0,0,8},
                      {9,7,7,7,7,7,7,7,7,9}};
