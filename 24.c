// Name: Aryan Rastogi    Roll No: MT2024026

// 24. Write a program to create an orphan process.

#include <stdio.h>
#include <unistd.h>

int main(void) {
  printf("Parent process PID: %d\n", getpid());
  if (!fork()) {
    printf("Child's ppid before orphan: %d\n", getppid());
    sleep(5); // context will switch from child to parent.
    // parent will terminate in 1 second.
    // only orphan child process will remain
    printf("Child's ppid after parent is terminated: %d\n", getppid());
  } else {
    sleep(1);
  }
  return 0;
}
