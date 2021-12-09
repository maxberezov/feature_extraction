# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
static
void init_array(int m, int n,
                double *alpha,
                double *beta,
                double C[ 1000 + 0][1200 + 0],
                double A[ 1000 + 0][1000 + 0],
                double B[ 1000 + 0][1200 + 0])
{
        int i, j;

        *alpha = 1.5;
        *beta = 1.2;
        for (i = 0; i < m; i++)
                for (j = 0; j < n; j++) {
                        C[i][j] = (double) ((i+j) % 100) / m;
                        B[i][j] = (double) ((n+i-j) % 100) / m;
                }
        for (i = 0; i < m; i++) {
                for (j = 0; j <=i; j++)
                        A[i][j] = (double) ((i+j) % 100) / m;
                for (j = i+1; j < m; j++)
                        A[i][j] = -999; //regions of arrays that should not be used
        }
}
