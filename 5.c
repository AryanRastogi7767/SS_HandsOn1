// Name: Aryan Rastogi    Roll No: MT2024026

// 5. Write a program to create five new files with infinite loop. Execute the
// program in the background and check the file descriptor table at
// /proc/pid/fd.

#include <fcntl.h>
#include <stdio.h>

int main(void) {
  char *a[5] = {"q", "w", "e", "t", "r"};
  for (int i = 0; i < 5; i++) {
    int fd = open(a[i], O_CREAT | O_RDWR);
    if (fd != -1) {
      printf("%d\n", fd);
    } else
      perror("Error");
  }
  for (;;)
    ;
  return 0;
}

// proc/pid/fd output

/* total 0 */
/* dr-x------ 2 aryan aryan  8 Aug 23 20:26 ./ */
/* dr-xr-xr-x 9 aryan aryan  0 Aug 23 20:26 ../ */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 0 -> /dev/pts/0 */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 1 -> /dev/pts/0 */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 2 -> /dev/pts/0 */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 3 ->
 * /home/aryan/Desktop/ShellScripts/hands_on1/q* */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 4 ->
 * /home/aryan/Desktop/ShellScripts/hands_on1/w */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 5 ->
 * /home/aryan/Desktop/ShellScripts/hands_on1/e */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 6 ->
 * /home/aryan/Desktop/ShellScripts/hands_on1/t */
/* lrwx------ 1 aryan aryan 64 Aug 23 20:26 7 ->
 * /home/aryan/Desktop/ShellScripts/hands_on1/r */
