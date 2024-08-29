// Name: Aryan Rastogi    Roll No: MT2024026

// 23. Write a program to create a Zombie state of the running program.

#include <stdio.h>
#include <unistd.h>

int main(void) {
  if (!fork()) {
    printf("Child process will become a zombie process.\n");
    printf("Parent pid: %d, Child pid: %d\n", getppid(), getpid());

    sleep(2);
  } else {
    while (1)
      ;
  }
  return 0;
}

// OUTPUT:
// Child process will become a zombie process.
// Parent pid: 8350, Child pid: 8351
