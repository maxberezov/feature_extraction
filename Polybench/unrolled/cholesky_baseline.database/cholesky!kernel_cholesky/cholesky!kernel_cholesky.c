# 82 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/cholesky/cholesky.c"
static
void kernel_cholesky(int n,
       double A[ 2000 + 0][2000 + 0])
{
  int i, j, k;


#pragma scop
  for (i = 0; i < n; i++) {
     //j<i
     for (j = 0; j < i; j++) {
        for (k = 0; k < j; k++) {
           A[i][j] -= A[i][k] * A[j][k];
        }
        A[i][j] /= A[j][j];
     }
     // i==j case
     for (k = 0; k < i; k++) {
        A[i][i] -= A[i][k] * A[i][k];
     }
     A[i][i] = sqrt(A[i][i]);
  }
#pragma endscop

}
