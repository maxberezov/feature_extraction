# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/lu/lu.c"
static
void kernel_lu(int n,
        double A[ 2000 + 0][2000 + 0])
{
  int i, j, k;

#pragma scop
  for (i = 0; i < n; i++) {
    for (j = 0; j <i; j++) {
       for (k = 0; k < j; k++) {
          A[i][j] -= A[i][k] * A[k][j];
       }
        A[i][j] /= A[j][j];
    }
   for (j = i; j < n; j++) {
       for (k = 0; k < i; k++) {
          A[i][j] -= A[i][k] * A[k][j];
       }
    }
  }
#pragma endscop
}
