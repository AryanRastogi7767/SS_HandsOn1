// Name:  Aryan Rastogi  Roll No: MT2024026

// 27. Write a program to execute ls -Rl by the following system calls
// a. execl
// b. execlp
// c. execled
// d. execv
//  e. execvp

#include <stdio.h>
#include <unistd.h>

int main() {
  execl("/bin/ls", "ls", "-Rl", (char *)NULL);
  perror("execl");
  return 1;
}
