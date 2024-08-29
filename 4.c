// Name: Aryan Rastogi    Roll No: MT2024026

// 4. Write a program to open an existing file with read write mode. Try O_EXCL
// flag also.
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>

int main(void) {
  // int fd = open("1.c", O_RDWR);
  int fd = open("1.c", O_CREAT | O_EXCL);
  if (fd != -1) {
    printf("%d\n", fd);
  } else
    perror("error has occured");
  return 0;
}
