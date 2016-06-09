#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  if (argc == 2) {
    printf("%d\n", factorial(argv[1]));
  }
  else {
    printf("Invalid number of parameters\n");
  }
}

int factorial(int number) {
  if (number > 1) {
    return factorial(number-1)*number;
  }
  else {
    return 1;
  }
}
