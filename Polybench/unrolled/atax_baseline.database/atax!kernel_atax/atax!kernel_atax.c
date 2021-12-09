# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/atax/atax.c"
static
void kernel_atax(int m, int n,
   double A[ 1900 + 0][2100 + 0],
   double x[ 2100 + 0],
   double y[ 2100 + 0],
   double tmp[ 1900 + 0])
{
  int i, j;

#pragma scop
  for (i = 0; i < n; i++){
    y[i] = 0;}
  for (i = 0; i < m; i++)
    {
      tmp[i] = 0.0;
      for (j = 0; j < n; j++){
 tmp[i] = tmp[i] + A[i][j] * x[j];}
      for (j = 0; j < n; j++){
 y[j] = y[j] + A[i][j] * tmp[i];}
    }
#pragma endscop

}
