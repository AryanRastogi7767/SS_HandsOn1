// Name: Aryan Rastogi    Roll No: MT2024026

// 3. Write a program to create a file and print the file descriptor value. Use
// creat ( ) system call

#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main(void) {
  int fd = creat("creat_file", O_CREAT);
  printf("%d\n", fd);
  return 0;
}

// Output: 3
