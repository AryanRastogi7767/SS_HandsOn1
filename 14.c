// Name: Aryan Rastogi    Roll No: MT2024026

// 14 Write a program to find the type of a file.
// a. Input should be taken from command line.
// b. program should be able to identify any type of a file.

#include <stdio.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
  struct stat st;
  int status;
  status = stat(argv[0], &st);

  printf("File type:     ");

  switch (st.st_mode & S_IFMT) {
  case S_IFBLK:
    printf("block device\n");
    break;
  case S_IFCHR:
    printf("character device\n");
    break;
  case S_IFDIR:
    printf("directory\n");
    break;
  case S_IFIFO:
    printf("FIFO/pipe\n");
    break;
  case S_IFLNK:
    printf("symlink\n");
    break;
  case S_IFREG:
    printf("regular file\n");
    break;
  case S_IFSOCK:
    printf("socket\n");
    break;
  default:
    printf("unknown?\n");
    break;
  }
  return 0;
}
// OUTPUT: File type:     regular file
