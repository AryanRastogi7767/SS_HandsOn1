// Name: Aryan Rastogi    Roll No: MT2024026

// 6. Write a program to take input from STDIN and display on STDOUT. Use only
// read/write system calls

#include <unistd.h>

int main(void) {
  char buff[10];
  read(0, buff, 10);  // reading from standard input.
  write(1, buff, 10); // writing to standard output
  return 0;
}
