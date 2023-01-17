// C program to find transpose of a matrix
// https://www.geeksforgeeks.org/program-to-find-transpose-of-a-matrix/

// Transpose of a matrix is obtained by changing rows to columns and columns to rows. In other words, transpose of A[N][M] is obtained by changing A[i][j] to A[j][i].
// * Run a nested loop using two integer pointers i and j for 0 <= i < N and 0 <= j < M
// * Set B[i][j] equal to A[j][i]
// Time complexity: O(M x N).
// Auxiliary Space: O(M x N), since M x N extra space has been used.

#include <stdio.h>
#define N 4

// This function stores transpose of A[][] in B[][]
void transpose(int A[][N], int B[][N]) {
  int i, j;
  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      B[i][j] = A[j][i];
}


int main() {
  int A[N][N] = {
    { 1, 1, 1, 1 },
    { 2, 2, 2, 2 },
    { 3, 3, 3, 3 },
    { 4, 4, 4, 4 }
  };

  // Note dimensions of B[][]
  int B[N][N], i, j;

  // Function call
  transpose(A, B);

  printf("Result matrix is \n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++)
      printf("%d ", B[i][j]);

    printf("\n");
  }

  return 0;
}
