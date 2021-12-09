# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
static
void init_array (int n,
   double A[ 2000 + 0],
   double B[ 2000 + 0])
{
  int i;

  for (i = 0; i < n; i++)
      {
 A[i] = ((double) i+ 2) / n;
 B[i] = ((double) i+ 3) / n;
      }
}
