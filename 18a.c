// Mane: Aryan Rastogi    Roll No:MT2024026
/*18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first
lock it th en modify/access to avoid race condition.
*/
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
  printf("Enter train number 1,2,3: ");
  int input = 0;
  scanf("%d", &input);
  struct train_db {
    int ticket_number;
  } train;

  int fd = open("train_db_file", O_RDWR);
  struct flock lock;
  lock.l_type = F_WRLCK;
  lock.l_whence = SEEK_SET;
  lock.l_start = (input - 1) * sizeof(train);
  lock.l_len = sizeof(train);
  lock.l_pid = getpid();

  lseek(fd, (input - 1) * sizeof(train), SEEK_SET);
  read(fd, &train, sizeof(train));
  printf("Before entering CS\n");
  fcntl(fd, F_SETLKW, &lock);
  printf("Current ticket number: %d\n", train.ticket_number);
  printf("Press ENTER to book ticket.\n");
  getchar();
  train.ticket_number++;
  printf("Press Again to confirm\n");
  getchar();
  lseek(fd, (input - 1) * sizeof(train), SEEK_SET);
  write(fd, &train, sizeof(train));
  printf("Current Ticket Number: %d\n", train.ticket_number);
  lock.l_type = F_UNLCK;
  fcntl(fd, F_SETLK, &lock);
  printf("Ticket Booked.\n");
  close(fd);
  return 0;
}
