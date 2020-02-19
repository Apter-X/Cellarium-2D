#include <stdio.h>
#include <stdlib.h>
#include <chrono> //timer
#include <thread> //timer

#include "scan.h"
#include "apax.h"
#include "materialize.h"
#include "move.h"

#define WIDTH_MAP  10
#define HEIGHT_MAP  10

#define MAP(width, heigth) int matrix[width][heigth]

using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

typedef struct Cell Cell;
struct Cell
{
  int x; // Abscisses
  int y; // Ordonnées

  int id[3];
};