# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
static
void init_array(int m, int n,
  double A[ 1000 + 0][1200 + 0],
  double R[ 1200 + 0][1200 + 0],
  double Q[ 1000 + 0][1200 + 0])
{
  int i, j;

  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
      A[i][j] = (((double) ((i*j) % m) / m )*100) + 10;
      Q[i][j] = 0.0;
    }
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      R[i][j] = 0.0;
}
