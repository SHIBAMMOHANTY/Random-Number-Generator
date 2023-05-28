#include <stdio.h>
#include <stdlib.h>

int main() {
  // Seed the random number generator with the current time.
  srand(time(NULL));

  // Generate a random number between 0 and 100.
  int random_number = rand() % 100;

  // Print the random number.
  printf("The random number is: %d\n", random_number);

  return 0;
}
