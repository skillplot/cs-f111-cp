#include <stdio.h>

// There are four main stages through which a source code is passed in order to finally get a runnable executable. They are: pre-processing, compilation, assembly and linking. By invoking gcc command, all these steps are accomplished, and you get the resultant executable in a.out. You can stop this pipeline at a specific stage by giving specific options for gcc.

// For instance, try gcc –S lab3_1.c for just invoking the assembler. The assembly code for the C program is now generated and stored in lab3_1.s 

// Any arbitrary C Program you write always starts with int main() and should contain return statement at the end.
// The 0 exit code is a widely accepted convention for 'OK the program execution was successful’.
int main() { 
	printf("Namaste\n");
	return 0;
}

