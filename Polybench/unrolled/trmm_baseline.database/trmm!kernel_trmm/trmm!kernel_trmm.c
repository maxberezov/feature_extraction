# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/trmm/trmm.c"
static
void kernel_trmm(int m, int n,
   double alpha,
   double A[ 1000 + 0][1000 + 0],
   double B[ 1000 + 0][1200 + 0])
{
  int i, j, k;

//BLAS parameters
//SIDE   = 'L'
//UPLO   = 'L'
//TRANSA = 'T'
//DIAG   = 'U'
// => Form  B := alpha*A**T*B.
// A is MxM
// B is MxN
#pragma scop
  for (i = 0; i < m; i++){
     for (j = 0; j < n; j++) {
        for (k = i+1; k < m; k++)
           B[i][j] += A[k][i] * B[k][j];
        B[i][j] = alpha * B[i][j];
     }
}
#pragma endscop

}
