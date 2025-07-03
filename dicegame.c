#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  srand(time(NULL));
  int diceCount = 2;

  printf("Rolling dice...\n");

  int total = 0;
  for(int i = 0; i < diceCount; i++)
  {
    int roll = rand() % 6 + 1;
    total += roll;

    printf("Dice %d: %d\n", i + 1, roll);
  }

  printf("Total value: %d\n", total);

  return 0;
}
