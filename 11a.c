// Name: Aryan Rastogi    Roll No: MT2024026

/* 11. Write a program to open a file, duplicate the file descriptor and append
 * the file with  */
/* both the */
/* descriptors and check whether the file is updated properly or not. */
/* a. use dup */
/* b. use dup2 */
/* c. use fcntl12. Write a program to find out the opening mode of a file. Use
 * fcntl. */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  char buffer[14] = "Appended Text";
  int old_fd = open("test_file", O_RDWR);

  lseek(old_fd, 2, SEEK_END);
  write(old_fd, buffer, sizeof(buffer));

  int new_fd = dup(old_fd);

  write(new_fd, buffer, sizeof(buffer));
  close(old_fd);
  return 0;
}
