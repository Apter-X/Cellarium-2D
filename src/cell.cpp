#include "../header/cell.h"

int Cell::scan(int matrix[][10])
{
  int direction = 0;

  // initialize random seed:
  srand (time(NULL));

  //scanning the 4 ways we have
  int bottom = matrix[x_position + 1][y_position];
  int top = matrix[x_position - 1][y_position];
  int right = matrix[x_position][y_position + 1];
  int left = matrix[x_position][y_position - 1];

  printf("------------------\n");
  printf("position: %d,%d\n", x_position, y_position);
  printf("bottom = %d", bottom);
  printf(" top = %d\n", top);
  printf("right = %d", right);
  printf(" left = %d\n", left);

  //Choose a direction
  if(bottom >= 0 && bottom < 7 && top >= 0 && top < 7 && right >= 0 && right < 7 && left >= 0 && left < 7)
  {
    // printf("Bot, Top, Right, Left");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }
    return (direction = rand() % 4 + 1);
  }

  if(bottom >= 0 && bottom < 7 && top >= 0 && top < 7 && right >= 0 && right < 7)
  {
    // printf("Bot, Top, Right");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }
    return (direction = rand() % 3 + 1);
  }

  if(bottom >= 0 && bottom < 7 && top >= 0 && top < 7 && left >= 0 && left < 7)
  {
    // printf("Bot, Top, Left");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }

    direction = rand() % 3 + 1;

    if(direction == 3)
    {
      return (direction = 4);
    }
    return (direction);
  }

  if(bottom >= 0 && bottom < 7 && right >= 0 && right < 7 && left >= 0 && left < 7)
  {
    // printf("Bot, Right, Left");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }
    
    direction = rand() % 3 + 1;

    if(direction == 2)
    {
      return (direction = 3);
    }

    if(direction == 3)
    {
      return (direction = 4);
    }
    return (direction);
  }

  if(top >= 0 && top < 7 && right >= 0 && right < 7 && left >= 0 && left < 7)
  {
    // printf("Top, Right, Left");
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }

    direction = rand() % 3 + 1;

    if(direction == 1)
    {
      return (direction = 2);
    }

    if(direction == 2)
    {
      return (direction = 3);
    }

    if(direction == 3)
    {
      return (direction = 4);
    }
  }

  if(bottom >= 0 && bottom < 7 && top >= 0 && top < 7)
  {
    // printf("Bot, Top");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    return (direction = rand() % 2 + 1);
  }

  if(bottom >= 0 && bottom < 7 && right >= 0 && right < 7)
  {
    // printf("Bot, Right");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }

    direction = rand() % 2 + 1;

    if(direction == 2)
    {
      return (direction = 3);
    }
    return direction;
  }

  if(bottom >= 0 && bottom < 7 && left >= 0 && left < 7)
  {
    // printf("Bot, Left");
    if(bottom > top && bottom > right && bottom > left)
    {
      return (direction = 1);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }

    direction = rand() % 2 + 1;

    if(direction == 2)
    {
      return (direction = 4);
    }
    return direction;
  }

  if(top >= 0 && top < 7 && right >= 0 && right < 7)
  {
    // printf("Top, Right");
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }

    direction = rand() % 2 + 1;

    if(direction == 1)
    {
      return (direction = 2);
    }

    if(direction == 2)
    {
      return (direction = 3);
    }
  }

  if(top >= 0 && top < 7 && left >= 0 && left < 7)
  {
    // printf("Top, Left");
    if(top > bottom && top > left && top > right)
    {
      return (direction = 2);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }

    direction = rand() % 2 + 1;

    if(direction == 1)
    {
      return (direction = 2);
    }

    if(direction == 2)
    {
      return (direction = 4);
    }
  }

  if(right >= 0 && right < 7 && left >= 0 && left < 7)
  {
    // printf("Right, Left");
    if(right > bottom && right > top && right > left)
    {
      return (direction = 3);
    }
    if(left > bottom && left > right && left > right)
    {
      return (direction = 4);
    }

    direction = rand() % 2 + 1;

    if(direction == 1)
    {
      return (direction = 3);
    }

    if(direction == 2)
    {
      return (direction = 4);
    }
  }

  if(bottom >= 0 && bottom < 7)
  {
    return (direction = 1);
  }

  if(top >= 0 && top < 7)
  {
    return (direction = 2);
  }

  if(right >= 0 && right < 7)
  {
    return (direction = 3);
  }

  if(left >= 0 && left < 7)
  {
    return (direction = 4);
  }
  return direction;  
}

void Cell::move(int direction, int matrix[][10])
{
    int position = matrix[x_position][y_position];

    switch(direction) 
  {
    case 1: //bottom
      matrix[x_position][y_position] -= position;
      x_position++;
      matrix[x_position][y_position] += position;
      break;
    case 2: //top
      matrix[x_position][y_position] -= position;
      x_position--;
      matrix[x_position][y_position] += position;
      break;
    case 3: //right
      matrix[x_position][y_position] -= position;
      y_position++;
      matrix[x_position][y_position] += position;
      break;
    case 4: //left
      matrix[x_position][y_position] -= position;
      y_position--;
      matrix[x_position][y_position] += position;
      break;
    default:
      printf("ERROR MOVE!\n");
  }
}