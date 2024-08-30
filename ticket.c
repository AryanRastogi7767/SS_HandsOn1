#include <fcntl.h>
#include <unistd.h>

struct ticket {
  int ticket_number;
};

int main(void) {
  int fd = open("ticket_number", O_RDWR | O_CREAT, 0644);
  struct ticket t;
  t.ticket_number = 0;
  write(fd, &t, sizeof(t));
  close(fd);
  return 0;
}
