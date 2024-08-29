// Name: Aryan Rastogi    Roll No: MT2024026

// 20. Find out the priority of your running program. Modify the priority with
// nice command.

#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>

int main(void) {

  printf("Initial Priority before nice system call: %d\n",
         getpriority(PRIO_PROCESS, 0));
  int n = nice(5);
  printf("Initial Priority after nice system call: %d\n",
         getpriority(PRIO_PROCESS, 0));

  return 0;
}

// Initial Priority is 20
