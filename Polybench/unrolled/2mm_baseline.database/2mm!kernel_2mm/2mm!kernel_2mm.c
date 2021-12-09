# 75 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/2mm/2mm.c"
static
void kernel_2mm(int ni, int nj, int nk, int nl,
  double alpha,
  double beta,
  double tmp[ 800 + 0][900 + 0],
  double A[ 800 + 0][1100 + 0],
  double B[ 1100 + 0][900 + 0],
  double C[ 900 + 0][1200 + 0],
  double D[ 800 + 0][1200 + 0])
{
  int i, j, k;

#pragma scop
  /* D := alpha*A*B*C + beta*D */
  for (i = 0; i < ni; i++){
    for (j = 0; j < nj; j++)
      {
 tmp[i][j] = 0.0;
 for (k = 0; k < nk; ++k)
   tmp[i][j] += alpha * A[i][k] * B[k][j];
      }
}
  for (i = 0; i < ni; i++){
    for (j = 0; j < nl; j++)
      {
 D[i][j] *= beta;
 for (k = 0; k < nj; ++k)
   D[i][j] += tmp[i][k] * C[k][j];
      }
}
#pragma endscop

}
