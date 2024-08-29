// Name: Aryan Rastogi    Roll No: MT2024026

// 12. Write a program to find out the opening mode of a file. Use fcntl.

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void print_flags(int flags) {
  if (flags & O_RDONLY)
    printf("O_RDONLY ");
  if (flags & O_WRONLY)
    printf("O_WRONLY ");
  if (flags & O_RDWR)
    printf("O_RDWR ");
  if (flags & O_APPEND)
    printf("O_APPEND ");
  if (flags & O_CREAT)
    printf("O_CREAT ");
  if (flags & O_EXCL)
    printf("O_EXCL ");
  printf("\n");
}

int main(void) {

  int old_fd = open("test_file", O_RDWR | O_APPEND);

  int flags = fcntl(old_fd, F_GETFL);
  print_flags(flags);
  return 0;
}

// OUTPUT : O_RDWR O_APPEND
