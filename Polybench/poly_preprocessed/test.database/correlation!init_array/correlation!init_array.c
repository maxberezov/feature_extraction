# 25 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
static
void init_array (int m,
                 int n,
                 double *float_n,
                 double data[ 1400 + 0][1200 + 0])
{
        int i, j;

        *float_n = (double)1400;

        for (i = 0; i < 1400; i++)
                for (j = 0; j < 1200; j++)
                        data[i][j] = (double)(i*j)/1200 + i;

}
