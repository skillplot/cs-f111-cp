gcc -c reverseArray_PassByReference.c
gcc -c reverseArray_PassByPointers.c
gcc -c reverseArray_main.c
gcc -o "Reverse.exe" reverseArray_main.o reverseArray_PassByPointers.o reverseArray_PassByReference.o
./Reverse.exe
rm reverseArray_PassByPointers.o
rm reverseArray_main.o
rm reverseArray_PassByReference.o
rm Reverse.exe
