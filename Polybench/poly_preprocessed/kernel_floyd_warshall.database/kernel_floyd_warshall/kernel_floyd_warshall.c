# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/medley/floyd-warshall/floyd-warshall.c"
void kernel_floyd_warshall(int n,
                           int path[ 2800 + 0][2800 + 0])
{
        int i, j, k;

#pragma scop
        polybench_timer_start();;

        for (k = 0; k < n; k++)
        {
                for(i = 0; i < n; i++) {
loop_1:
                        for (j = 0; j < n; j++) {
                                path[i][j] = path[i][j] < path[i][k] + path[k][j] ?
                                             path[i][j] : path[i][k] + path[k][j];
                        }
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
