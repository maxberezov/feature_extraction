# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
static
void init_array (int n,
                 double A[ 2000 + 0][2000 + 0])
{
        int i, j;

        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                        A[i][j] = ((double) i*(j+2) + 2) / n;
}
