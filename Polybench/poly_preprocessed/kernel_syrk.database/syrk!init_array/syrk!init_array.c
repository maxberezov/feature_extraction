# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/syrk/syrk.c"
static
void init_array(int n, int m,
                double *alpha,
                double *beta,
                double C[ 1200 + 0][1200 + 0],
                double A[ 1200 + 0][1000 + 0])
{
        int i, j;

        *alpha = 1.5;
        *beta = 1.2;
        for (i = 0; i < n; i++)
                for (j = 0; j < m; j++)
                        A[i][j] = (double) ((i*j+1)%n) / n;
        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                        C[i][j] = (double) ((i*j+2)%m) / m;
}
