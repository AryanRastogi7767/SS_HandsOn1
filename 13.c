// Name: Aryan Rastogi    Roll No: MT2024026

// 13. Write a program to wait for a STDIN for 10 seconds using select. Write a
// proper print statement to verify whether the data is available within 10
// seconds or not (check in $man 2 select).

#include <stdio.h>
#include <sys/select.h>

int main(void) {
  fd_set read_fds;
  struct timeval tv;
  int val;

  FD_ZERO(&read_fds);   // initializing the file descriptor set.
  FD_SET(0, &read_fds); // adding STDIN to fd_set

  tv.tv_sec = 10;
  tv.tv_usec = 0;

  val = select(1, &read_fds, NULL, NULL, &tv);

  if (val == -1) {
    perror("select() failed.\n");
  } else if (val == 1) {
    printf("Input available within 10 seconds.\n");
  } else {
    printf("No input in 10 seconds.");
  }
  return 0;
}
