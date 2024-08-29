// Name: Aryan Rastogi    Roll No: MT2024026

/*
9. Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change*/

#include <stdio.h>
#include <sys/stat.h>

int main(void) {
  struct stat st;
  int status;
  status = stat("8.c", &st);

  printf("Inode: %lu\n", st.st_ino);
  printf("UID: %u\n", st.st_uid);
  printf("GID: %u\n", st.st_gid);
  printf("Hard Links: %lu\n", st.st_nlink);
  printf("Size of Blocks: %lu\n", st.st_blksize);
  printf("Number of Blocks: %lu\n", st.st_blocks);
  printf("Size: %lu\n", st.st_size);
  printf("Time of last access: %lu\n", st.st_atime);
  printf("Time of last modification: %lu\n", st.st_mtime);
  printf("Time of last change: %lu\n", st.st_ctime);

  return 0;
}

// OUTPUT:

/* Inode: 16152552
UID: 1000
GID: 1000
Hard Links: 1
Size of Blocks: 4096
Number of Blocks: 8
Size: 785
Time of last access: 1724936474
Time of last modification: 1724936474
Time of last change: 1724936474 */
