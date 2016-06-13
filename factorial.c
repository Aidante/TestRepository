//Include Statements
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  //See if there is an argument
  if (argc == 2) {
    //Call the factorial function and print the output
    printf("%d\n", factorial(argv[1]));
  }
  else {
    printf("Invalid number of parameters\n");
  }
}

int factorial(int number) {
  //If x>1, x! = x*(x-1)!, meanwhile 1! or 0! = 1
  if (number > 1) {
    return factorial(number-1)*number;
  }
  else {
    return 1;
  }
}
//This is a test
