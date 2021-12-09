# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/cholesky/cholesky.c"
static
void init_array(int n,
  double A[ 2000 + 0][2000 + 0])
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j <= i; j++)
 A[i][j] = (double)(-j % n) / n + 1;
      for (j = i+1; j < n; j++) {
 A[i][j] = 0;
      }
      A[i][i] = 1;
    }

  /* Make the matrix positive semi-definite. */
  int r,s,t;
  double (*B)[2000 + 0][2000 + 0]; B = (double(*)[2000 + 0][2000 + 0])polybench_alloc_data ((2000 + 0) * (2000 + 0), sizeof(double));;
  for (r = 0; r < n; ++r)
    for (s = 0; s < n; ++s)
      (*B)[r][s] = 0;
  for (t = 0; t < n; ++t)
    for (r = 0; r < n; ++r)
      for (s = 0; s < n; ++s)
 (*B)[r][s] += A[r][t] * A[s][t];
    for (r = 0; r < n; ++r)
      for (s = 0; s < n; ++s)
 A[r][s] = (*B)[r][s];
  free((void*)B);;

}
