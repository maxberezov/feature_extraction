# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
static
void init_array (int m, int n,
double A[ 1900 + 0][2100 + 0],
double x[ 2100 + 0])
{
int i, j;
double fn;
fn = (double)n;

for (i = 0; i < n; i++)
x[i] = 1 + (i / fn);
for (i = 0; i < m; i++)
for (j = 0; j < n; j++)
A[i][j] = (double) ((i+j) % n) / (5*m);
}
