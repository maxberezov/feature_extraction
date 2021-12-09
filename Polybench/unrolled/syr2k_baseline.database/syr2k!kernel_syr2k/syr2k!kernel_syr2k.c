# 71 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
static
void kernel_syr2k(int n, int m,
    double alpha,
    double beta,
    double C[ 1200 + 0][1200 + 0],
    double A[ 1200 + 0][1000 + 0],
    double B[ 1200 + 0][1000 + 0])
{
  int i, j, k;

//BLAS PARAMS
//UPLO  = 'L'
//TRANS = 'N'
//A is NxM
//B is NxM
//C is NxN
#pragma scop
  for (i = 0; i < n; i++) {
    for (j = 0; j <= i; j++){
      C[i][j] *= beta;}
    for (k = 0; k < m; k++){
      for (j = 0; j <= i; j++)
 {
   C[i][j] += A[j][k]*alpha*B[i][k] + B[j][k]*alpha*A[i][k];
 }
}
  }
#pragma endscop

}
