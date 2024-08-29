// Name: Aryan Rastogi    Roll No: MT2024026

// 1. Create the following types of a files using (i) shell command (ii) system
// call
/* a. soft link (symlink system call) */
/* b. hard link (link system call) */
/* c. FIFO (mkfifo Library Function or mknod system call) */

#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
int main(void) {

  if (symlink("1.c", "link_file") == -1) {
    perror("symlink error");
  }
  if (link("1.c", "hard_link.c") == -1) {
    perror("hard-link error");
  }

  if (mknod("special_file", S_IFIFO | 0666, 0) == -1) {
    perror("FIFO error");
  }
  return 0;
}
