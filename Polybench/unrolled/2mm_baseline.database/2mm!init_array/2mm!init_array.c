# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/2mm/2mm.c"
static
void init_array(int ni, int nj, int nk, int nl,
  double *alpha,
  double *beta,
  double A[ 800 + 0][1100 + 0],
  double B[ 1100 + 0][900 + 0],
  double C[ 900 + 0][1200 + 0],
  double D[ 800 + 0][1200 + 0])
{
  int i, j;

  *alpha = 1.5;
  *beta = 1.2;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nk; j++)
      A[i][j] = (double) ((i*j+1) % ni) / ni;
  for (i = 0; i < nk; i++)
    for (j = 0; j < nj; j++)
      B[i][j] = (double) (i*(j+1) % nj) / nj;
  for (i = 0; i < nj; i++)
    for (j = 0; j < nl; j++)
      C[i][j] = (double) ((i*(j+3)+1) % nl) / nl;
  for (i = 0; i < ni; i++)
    for (j = 0; j < nl; j++)
      D[i][j] = (double) (i*(j+2) % nk) / nk;
}
