#include "header/main.h"

int main(int argc, char *argv[])
{
  bool end = false;
  int timer = 1000;

  Cellarium cellarium;
  Cell cell1(1, 1), cell2(7, 3), cell3(5, 1), cell4(2, 7), cell5(4, 4);

  while(!end)
  {
    cellarium.materialize(10, 10, matrix);
    cell3.move(cell3.scan(matrix), matrix);
    cell4.move(cell4.scan(matrix), matrix);
    cell5.move(cell5.scan(matrix), matrix);
    cell1.move(cell1.scan(matrix), matrix);
    cell2.move(cell2.scan(matrix), matrix);

    Sleep(timer);
  }

  return (0);
}