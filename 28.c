// Name: Aryan Rastogi    Roll No: MT2024026

// 28. Write a program to get maximum and minimum real time priority.

#include <sched.h>
#include <stdio.h>

int main(void) {
  printf("For Real time processes:\nMax Priority Value: %d\nMinimum Priority "
         "Value: %d\n ",
         sched_get_priority_max(SCHED_RR), sched_get_priority_min(SCHED_RR));
  return 0;
}
