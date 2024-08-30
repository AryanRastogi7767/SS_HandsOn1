// Name: Aryan Rastogi    Roll No: MT2024026

// 17. Write a program to simulate online ticket reservation. Implement write
// lock Write a program to open a file, store a ticket number and exit. Write a
// separate program, to open the file, implement write lock, read the ticket
// number, increment the number and print the new ticket number then close the
// file.

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  struct flock lock;
  struct ticket {
    int ticket_number;
  } t;
  int fd = open("ticket_number", O_RDWR);
  lock.l_type = F_WRLCK;
  lock.l_whence = SEEK_SET;
  lock.l_start = 0;
  lock.l_len = 0;
  lock.l_pid = getpid();
  read(fd, &t, sizeof(t));
  printf("Before entering CS.\n");
  fcntl(fd, F_SETLKW, &lock);
  printf("Inside CS\n");
  printf("Current Ticket No: %d\n", t.ticket_number++);
  lseek(fd, 0, SEEK_SET);
  write(fd, &t, sizeof(t));
  getchar();
  lock.l_type = F_UNLCK;
  fcntl(fd, F_SETLK, &lock);
  printf("Outside CS.\n");

  return 0;
}

// OUTPUT
/*Before entering CS.
Inside CS
Current Ticket No: 3

Outside CS.
 */
