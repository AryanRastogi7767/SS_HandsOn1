// Name: Aryan Rastogi    Roll No: MT2024026

// 19. Write a program to find out time taken to execute getpid system call. Use
// time stamp counter.

#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

unsigned long long rdtsc() {
  unsigned long long dst;
  __asm__ __volatile__("rdtsc" : "=A"(dst));
}

int main(void) {
  int i, nano;
  unsigned long long int start, end;
  start = rdtsc();
  int a = 1;
  for (int i = 0; i < 10000; i++) {
    a++;
  }
  end = rdtsc();
  nano = (end - start) / 2.7;
  printf("Time Taked in Nano seconds: %d\n", nano);
  return 0;
}

// OUTPUT: Time Taked in Nano seconds: 57222
