// Name: Aryan Rastogi    Roll No: MT2024026

// 22. Write a program, open a file, call fork, and then write to the file by
// both the child as well as the parent processes. Check output of the file.

#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main(void) {
  int fd = open("fork_test_file", O_RDWR | O_CREAT, 0644);
  pid_t p = fork();
  if (p == 0) {
    char *buffer = "Writing from Child Process Made by fork.\n";
    write(fd, buffer, strlen(buffer));
  } else {
    char *buffer = "Writing from Parent Process\n";
    write(fd, buffer, strlen(buffer));
  }
  return 0;
}
