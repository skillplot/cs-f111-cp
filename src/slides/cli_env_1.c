#include <stdio.h>

// https://www.geeksforgeeks.org/c-program-print-environment-variables/
// Most of the C compilers support a third parameter to main which
// store all environment variables
int main(int argc, char *argv[], char * envp[]) {
  printf("\n%s", envp[1]);
  int i;
  // for (i=0; envp[i] != NULL; i++)
  //   printf("\n%s", envp[i]);

  getchar();
  return 0;
}
