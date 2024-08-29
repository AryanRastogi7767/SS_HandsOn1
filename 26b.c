// Name: Aryan Rastogi    Roll No: MT2024026

// 26. Write a program to execute an executable program.
// a. use some executable program
// b. pass some input to an executable program. (for example execute an
// executable of $./a.out name)

#include <stdio.h>
#include <unistd.h>

int main(void) {

  char *file = "print_args.out";
  char *const args[] = {"print_args.out", "Aryan", "Rastogi", NULL};

  execv(file, args);

  return 0;
}
