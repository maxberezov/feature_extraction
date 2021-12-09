# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
static
void kernel_trisolv(int n,
      double L[ 2000 + 0][2000 + 0],
      double x[ 2000 + 0],
      double b[ 2000 + 0])
{
  int i, j;

#pragma scop
  for (i = 0; i < n; i++)
    {
      x[i] = b[i];
      for (j = 0; j <i; j++){
        x[i] -= L[i][j] * x[j];}
      x[i] = x[i] / L[i][i];
    }
#pragma endscop

}
