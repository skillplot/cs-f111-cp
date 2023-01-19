#include <stdio.h>

// Components of Line Arguments

// https://data-flair.training/blogs/command-line-arguments-in-c/
// https://www.cprogramming.com/tutorial/c/lesson14.html

// * They are passed to main() function.
// * They are parameters/arguments supplied to the program when it is invoked.
// * They are used to control program from outside instead of hard coding those values inside the code.
// * argv[argc] is a NULL pointer.
// * argv[0] holds the name of the program.
// * argv[1] points to the first command line argument and argv[n] points last argument.
// * argv[argc] is a null pointer.
// Always passed to the main() function.
// Command Line Arguments are passed by the user from the terminal. It is used to control programs from the outside.


// * argc (ARGument Count) is int and stores number of command-line arguments passed by the user including the name of the program. So if we pass a value to a program, value of argc would be 2 (one for argument and one for program name)
// * The value of argc should be non negative.
// * argv(ARGument Vector) is array of character pointers listing all the arguments.
// * If argc is greater than zero,the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
// * Argv[0] is the name of the program , After that till argv[argc-1] every element is command -line arguments.

// Applications
// * It allows the use of standard input and output so that we can chain commands using shell.
// * It is used to simplify the installation and use of simple programs.


// * In order to implement command line arguments, generally, 2 parameters are passed into the main function:
//    * Number of command line arguments
//    * The list of command line arguments

int main(int argc, char *argv[]) {
// int main(int argc, char **argv) {
  printf("Number of arguments: %d \n", argc);
  int i = 0;
  while(i < argc){
    printf("Argument %d: %s \n",i, argv[i]);
    i++;
  }
  return 0;
}
