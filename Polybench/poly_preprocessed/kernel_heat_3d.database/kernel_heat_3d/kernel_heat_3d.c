# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/heat-3d/heat-3d.c"
void kernel_heat_3d(int tsteps,
                    int n,
                    double A[ 120 + 0][120 + 0][120 + 0],
                    double B[ 120 + 0][120 + 0][120 + 0])
{
        int t, i, j, k;

#pragma scop
        polybench_timer_start();;

        for (t = 1; t <= 500; t++) {
                for (i = 1; i < n-1; i++) {
                        for (j = 1; j < n-1; j++) {
                                for (k = 1; k < n-1; k++) {
                                        B[i][j][k] = 0.125 * (A[i+1][j][k] - 2.0 * A[i][j][k] + A[i-1][j][k])
                                                     + 0.125 * (A[i][j+1][k] - 2.0 * A[i][j][k] + A[i][j-1][k])
                                                     + 0.125 * (A[i][j][k+1] - 2.0 * A[i][j][k] + A[i][j][k-1])
                                                     + A[i][j][k];
                                }
                        }
                }
                for (i = 1; i < n-1; i++) {
                        for (j = 1; j < n-1; j++) {
loop_1:
                                for (k = 1; k < n-1; k++) {
                                        A[i][j][k] = 0.125 * (B[i+1][j][k] - 2.0 * B[i][j][k] + B[i-1][j][k])
                                                     + 0.125 * (B[i][j+1][k] - 2.0 * B[i][j][k] + B[i][j-1][k])
                                                     + 0.125 * (B[i][j][k+1] - 2.0 * B[i][j][k] + B[i][j][k-1])
                                                     + B[i][j][k];
                                }
                        }
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
