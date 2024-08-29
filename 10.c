// Name: Aryan Rastogi    Roll No: MT2024026

/* 10. Write a program to open a file with read write mode, write 10 bytes, move
 * the file poin */
/* ter by 10 */
/* bytes (use lseek) and write again 10 bytes. */
/* a. check the return value of lseek */
/* b. open the file with od and check the empty spaces in between the data. */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  int seek;
  int fd = open("new_test_file", O_RDWR | O_CREAT, 0744);
  char buffer[100] = "HelloPeeps";
  write(fd, buffer, 10);
  seek = lseek(fd, 10, SEEK_CUR);
  write(fd, buffer, 10);
  printf("Return value of lseek: %d\n", seek);
  close(fd);
  return 0;
}

/* output of 'od new_test_file'
0000000 062510 066154 050157 062545 071560 000000 000000 000000
0000020 000000 000000 062510 066154 050157 062545 071560
0000036
*/
