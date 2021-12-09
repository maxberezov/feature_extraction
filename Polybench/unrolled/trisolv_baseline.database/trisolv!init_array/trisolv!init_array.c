# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
static
void init_array(int n,
  double L[ 2000 + 0][2000 + 0],
  double x[ 2000 + 0],
  double b[ 2000 + 0])
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      x[i] = - 999;
      b[i] = i ;
      for (j = 0; j <= i; j++)
 L[i][j] = (double) (i+n-j+1)*2/n;
    }
}
