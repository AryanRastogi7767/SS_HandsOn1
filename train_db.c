#include <fcntl.h>
#include <unistd.h>

int main(void) {
  struct train_db {
    int ticket_number;
  };

  int fd = open("train_db_file", O_RDWR | O_CREAT, 0644);
  struct train_db t[3];
  t[0].ticket_number = 0;
  t[1].ticket_number = 0;
  t[2].ticket_number = 0;
  write(fd, &t, sizeof(t));
  close(fd);

  return 0;
}
