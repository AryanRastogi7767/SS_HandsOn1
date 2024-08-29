// Name: Aryan Rastogi    Roll No: MT2024026

/*
8. Write a program to open a file in read only mode, read line by line and
display each line as it is read. Close the file when end of file is reached.
*/
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  char buffer[100];
  char c;
  int fd = open("handson.c", O_RDONLY);
  /* int read = 1; // to hold return value of read system call */
  /* while(read != 0) */
  /* { */
  /*   read = read(fd, buffer, 100); */
  /*   if(read == -1) */
  /*   { */
  /*     printf("Read system call error/n"); */
  /*     break; */
  /*   } */
  /*   if(buffer[read] == "/n") */
  /* } */

  while (read(fd, &c, 1) == 1) {
    printf("%c", c);
    if (c == '\n') {
      printf("\n");
    }
  }
  close(fd);
  return 0;
}
