# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/datamining/covariance/covariance.c"
static
void init_array (int m, int n,
                 double *float_n,
                 double data[ 1400 + 0][1200 + 0])
{
        int i, j;

        *float_n = (double)n;

        for (i = 0; i < 1400; i++)
                for (j = 0; j < 1200; j++)
                        data[i][j] = ((double) i*j) / 1200;
}
