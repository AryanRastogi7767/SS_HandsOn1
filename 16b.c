// Name: Aryan Rastogi    Roll No: MT2024026

// 16. Write a program to perform mandatory locking.
// a. Implement write lock
// b. Implement read lock

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  struct flock lock;
  int fd = open("test_file", O_RDWR);
  lock.l_type = F_RDLCK;
  lock.l_whence = SEEK_SET;
  lock.l_start = 0;
  lock.l_len = 0;
  lock.l_pid = getpid();
  printf("Before entering the critical section.\n");
  fcntl(fd, F_SETLKW, &lock);
  printf("Inside critical section.\n");
  printf("Press any key twice to unlock.\n");
  getchar();
  getchar();
  printf("Write lock removed.\n");
  lock.l_type = F_UNLCK;
  fcntl(fd, F_SETLKW, &lock);
  printf("FINISH\n");
  return 0;
}
