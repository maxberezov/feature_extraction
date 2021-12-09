# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
static
void init_array (int n,
                 double A[ 1300 + 0][1300 + 0],
                 double B[ 1300 + 0][1300 + 0])
{
        int i, j;

        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                {
                        A[i][j] = ((double) i*(j+2) + 2) / n;
                        B[i][j] = ((double) i*(j+3) + 3) / n;
                }
}
