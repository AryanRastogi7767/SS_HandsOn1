// Name: Aryan Rastogi    Roll No: MT2024026

// 15. Write a program to display the environmental variable of the user (use
// environ).

#include <stdio.h>

extern char **environ;

int main(void) {
  char **env = environ;

  while (*env) {
    printf("%s\n", *env);
    env++;
  }

  return 0;
}

// OUTPUT: Prints the complete list of environment variables.
