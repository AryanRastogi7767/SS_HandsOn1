// Name: Aryan Rastogi    Roll No: MT2024026

// 21. Write a program, call fork and print the parent and child process id.

#include <stdio.h>
#include <unistd.h>

int main(void) {
  printf("Parent Process ID: %d\n", getpid());
  pid_t p;
  p = fork();
  if (p == 0) {
    printf("Child PID: %d\n", getpid());
  }
  return 0;
}

// OUTPUT: Parent Process ID: 7752
// Child PID: 7753
