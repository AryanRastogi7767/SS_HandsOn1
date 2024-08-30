// Name: Aryan Rastogi    Roll No: MT2024026

// 29. Write a program to get scheduling policy and modify the scheduling policy
// (SCHED_FIFO, SCHED_RR).
#include <sched.h>
#include <stdio.h>
#include <unistd.h>

int print_scheduler(int pid) {
  int policy = sched_getscheduler(pid);
  switch (policy) {
  case SCHED_OTHER:
    printf("Scheduler is SCHED_OTHER.\n");
    break;
  case SCHED_FIFO:
    printf("Scheduler is SCHED_FIFO.\n");
    break;
  case SCHED_RR:
    printf("Scheduler is SCHED_RR.\n");
    break;
  default:
    printf("System call failed to fetch Scheduler\n");
    break;
  }
  return policy;
}

int main(void) {
  int pid = getpid();
  int policy = print_scheduler(pid);
  struct sched_param s;

  s.sched_priority = sched_get_priority_max(SCHED_FIFO);
  if (sched_setscheduler(0, SCHED_FIFO, &s) == -1) {
    printf("set_scheduler failed.\n");
    return 1;
  }
  policy = print_scheduler(pid);
  return 0;
}

// Need to use sudo to run a.out as changing policy needs root permissions

// OUTPUT:
// Scheduler is SCHED_OTHER.
// Scheduler is SCHED_FIFO.
