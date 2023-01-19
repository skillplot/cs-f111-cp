#include <stdio.h>

int f1() {
  int arr[4] = {1, 2, 3, 4};
  return arr;
}

int main() {
  int _arr[] = f1();
  // printf("First ele is: %d", _arr[0]);
  return 0;
}

// output:
// lect11_1.c: In function ‘f1’:
// lect11_1.c:5:10: warning: return makes integer from pointer without a cast [-Wint-conversion]
//    return arr;
//           ^~~
// lect11_1.c:5:10: warning: function returns address of local variable [-Wreturn-local-addr]
// lect11_1.c: In function ‘main’:
// lect11_1.c:9:16: error: invalid initializer
//    int _arr[] = f1();
//                 ^~

// https://stackoverflow.com/questions/6804176/returning-an-array-warning-function-returns-address-of-local-variable

// The reason you are getting this error is because local arrays get put on the stack, when you return that array you return an address in a stack frame. The problem is that when that method finishes execution that stack frame is no longer valid and therefore you cannot expect any data that was on that frame to be valid (although there are cases when this does work but it is considered bad practice). By allocating that array on the heap you can return a heap address where your data is assured to exist until you call free() on the pointer to that data.


// https://stackoverflow.com/questions/33404478/initialization-makes-pointer-from-integer-without-a-cast-c
// In C, when you wish to change the value of a variable in a function, you "pass the Variable into the function by Reference". You can read more about this here - Pass by Reference

// Now the error means that you are trying to store an integer into a variable that is a pointer, without typecasting. You can make this error go away by changing that line as follows (But the program won't work because the logic will still be wrong )
