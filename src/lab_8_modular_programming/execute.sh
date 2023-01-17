gcc -c student1.c
gcc -c student2.c
gcc -c student3.c
gcc -c checkAnswers.c
gcc -o "s1.exe" checkAnswers.o student1.o
echo
echo "Checking for Student 1"
./s1.exe
gcc -o "s2.exe" checkAnswers.o student2.o
echo
echo "Checking for Student 2"
./s2.exe
gcc -o "s3.exe" checkAnswers.o student3.o
echo
echo "Checking for Student 3"
./s3.exe
echo
rm "student1.o"
rm "student2.o"
rm "student3.o"
rm "s1.exe"
rm "s2.exe"
rm "s3.exe"
rm "checkAnswers.o"