# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/heat-3d/heat-3d.c"
static
void init_array (int n,
   double A[ 120 + 0][120 + 0][120 + 0],
   double B[ 120 + 0][120 + 0][120 + 0])
{
  int i, j, k;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      for (k = 0; k < n; k++)
        A[i][j][k] = B[i][j][k] = (double) (i + j + (n-k))* 10 / (n);
}
