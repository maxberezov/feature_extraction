# 72 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/bicg/bicg.c"
static
void kernel_bicg(int m, int n,
   double A[ 2100 + 0][1900 + 0],
   double s[ 1900 + 0],
   double q[ 2100 + 0],
   double p[ 1900 + 0],
   double r[ 2100 + 0])
{
  int i, j;

#pragma scop
  for (i = 0; i < m; i++){
    s[i] = 0;
}
  for (i = 0; i < n; i++)
    {
      q[i] = 0.0;
      for (j = 0; j < m; j++)
 {
   s[j] = s[j] + r[i] * A[i][j];
   q[i] = q[i] + A[i][j] * p[j];
 }
    }
#pragma endscop

}
