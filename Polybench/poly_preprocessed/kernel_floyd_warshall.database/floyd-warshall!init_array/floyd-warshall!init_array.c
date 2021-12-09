# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/medley/floyd-warshall/floyd-warshall.c"
static
void init_array (int n,
                 int path[ 2800 + 0][2800 + 0])
{
        int i, j;

        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++) {
                        path[i][j] = i*j%7+1;
                        if ((i+j)%13 == 0 || (i+j)%7==0 || (i+j)%11 == 0)
                                path[i][j] = 999;
                }
}
