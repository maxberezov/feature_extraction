# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/doitgen/doitgen.c"
static
void init_array(int nr, int nq, int np,
  double A[ 150 + 0][140 + 0][160 + 0],
  double C4[ 160 + 0][160 + 0])
{
  int i, j, k;

  for (i = 0; i < nr; i++)
    for (j = 0; j < nq; j++)
      for (k = 0; k < np; k++)
 A[i][j][k] = (double) ((i*j + k)%np) / np;
  for (i = 0; i < np; i++)
    for (j = 0; j < np; j++)
      C4[i][j] = (double) (i*j % np) / np;
}
