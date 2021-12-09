# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/adi/adi.c"
static
void init_array (int n,
                 double u[ 1000 + 0][1000 + 0])
{
        int i, j;

        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++)
                {
                        u[i][j] = (double)(i + n-j) / n;
                }
}
