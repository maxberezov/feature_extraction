# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
void kernel_jacobi_2d(int tsteps,
                      int n,
                      double A[ 1300 + 0][1300 + 0],
                      double B[ 1300 + 0][1300 + 0])
{
        int t, i, j;

#pragma scop
        polybench_timer_start();;

        for (t = 0; t < tsteps; t++)
        {
                for (i = 1; i < n - 1; i++) {
                        for (j = 1; j < n - 1; j++) {
                                B[i][j] = 0.2 * (A[i][j] + A[i][j-1] + A[i][1+j] + A[1+i][j] + A[i-1][j]);
                        }
                }
                for (i = 1; i < n - 1; i++) {
loop_1:
                        for (j = 1; j < n - 1; j++) {
                                A[i][j] = 0.2 * (B[i][j] + B[i][j-1] + B[i][1+j] + B[1+i][j] + B[i-1][j]);
                        }
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
