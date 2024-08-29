// Name: Aryan Rastogi    Roll No: MT2024026

// 7. Write a program to copy file1 into file2 ($cp file1 file2).

#include <fcntl.h>
#include <unistd.h>

int main(void) {
  char buf[1024];
  int fd = open("2.c", O_RDONLY);
  read(fd, buf, 1024);
  int fd2 = open("2_copy.c", O_CREAT | O_RDWR, 0744);
  write(fd2, buf, 1024);

  return 0;
}
