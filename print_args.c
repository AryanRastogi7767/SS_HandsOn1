
// C++ program to implement
// command-lien arguments
#include <stdio.h>

// Command Line Arg
int main(int argc, char *argv[]) {
  int i;
  printf("File Name: %s\n", argv[0]);
  for (i = 1; i < argc; i++) {
    // Printing all the Arguments
    printf("Argument %d: %s \n", i, argv[i]);
  }
  printf("\n");
  return 0;
}
