# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syrk/syrk.c"
static
void kernel_syrk(int n, int m,
   double alpha,
   double beta,
   double C[ 1200 + 0][1200 + 0],
   double A[ 1200 + 0][1000 + 0])
{
  int i, j, k;

//BLAS PARAMS
//TRANS = 'N'
//UPLO  = 'L'
// =>  Form  C := alpha*A*A**T + beta*C.
//A is NxM
//C is NxN
#pragma scop
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++){
      C[i][j] *= beta;}
    for (k = 0; k < m; k++) {
      for (j = 0; j <= i; j++)
        C[i][j] += alpha * A[i][k] * A[j][k];
    }
  }
#pragma endscop

}
