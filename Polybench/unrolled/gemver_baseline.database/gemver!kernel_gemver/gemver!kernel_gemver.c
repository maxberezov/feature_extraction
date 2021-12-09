# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/gemver/gemver.c"
static
void kernel_gemver(int n,
     double alpha,
     double beta,
     double A[ 2000 + 0][2000 + 0],
     double u1[ 2000 + 0],
     double v1[ 2000 + 0],
     double u2[ 2000 + 0],
     double v2[ 2000 + 0],
     double w[ 2000 + 0],
     double x[ 2000 + 0],
     double y[ 2000 + 0],
     double z[ 2000 + 0])
{
  int i, j;

#pragma scop

  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      A[i][j] = A[i][j] + u1[i] * v1[j] + u2[i] * v2[j];
}

  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      x[i] = x[i] + beta * A[j][i] * y[j];
}

  for (i = 0; i < n; i++){
    x[i] = x[i] + z[i];
}

  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++)
      w[i] = w[i] + alpha * A[i][j] * x[j];
}

#pragma endscop
}
