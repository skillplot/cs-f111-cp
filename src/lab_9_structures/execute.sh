gcc -c books_catalog.c
gcc -c book_fun.c
gcc -c main_library.c
gcc -o "Execute.exe" main_library.o book_fun.o books_catalog.o
./Execute.exe
rm "main_library.o"
rm "books_catalog.o"
rm "book_fun.o"