#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int p1, p2;
  bool k = true;

  while (k) {
    printf("Player 1, enter a number between 1 and 1000:\n");
    scanf("%d", &p1);
    if (p1 >= 1 && p1 <= 1000) {
      k = false;
    } else {
      printf("The number is out of range.\n");
    }
  }

  for (int i = 10; i > 0; i--) {
    printf("Player 2, you have %d guesses remaining.\nEnter your guess:\n", i);
    scanf("%d", &p2);
    if (p2 == p1) {
      printf("Player 2 wins.");
      return 0;
    } else if (p2 < p1) {
      printf("Too low.\n");
    } else {
      printf("Too high.\n");
    }
  };
  printf("Player 1 wins.");
  return 0;
};
