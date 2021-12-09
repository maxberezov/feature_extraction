# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
static
void init_array (int n,
double A[ 2000 + 0][2000 + 0],
double b[ 2000 + 0],
double x[ 2000 + 0],
double y[ 2000 + 0])
{
int i, j;
double fn = (double)n;

for (i = 0; i < n; i++)
{
x[i] = 0;
y[i] = 0;
b[i] = (i+1)/fn/2.0 + 4;
}

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
/* not necessary for LU, but using same code as cholesky */
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
