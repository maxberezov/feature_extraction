# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gemver/gemver.c"
void kernel_gemver(int n,
                   double alpha,
                   double beta,
                   double A[ 2000 + 0][2000 + 0],
                   double u1[ 2000 + 0],
                   double v1[ 2000 + 0],
                   double u2[ 2000 + 0],
                   double v2[ 2000 + 0],
                   double w[ 2000 + 0],
                   double x[ 2000 + 0],
                   double y[ 2000 + 0],
                   double z[ 2000 + 0])
{
        int i, j;

#pragma scop

        polybench_timer_start();;

        for (i = 0; i < n; i++) {
loop_1:
                for (j = 0; j < n; j++) {
                        A[i][j] = A[i][j] + u1[i] * v1[j] + u2[i] * v2[j];
                }
        }

        polybench_timer_stop();;

        polybench_timer_print();;

        polybench_timer_start();;

        for (i = 0; i < n; i++) {
loop_2:
                for (j = 0; j < n; j++) {
                        x[i] = x[i] + beta * A[j][i] * y[j];
                }
        }

        polybench_timer_stop();;

        polybench_timer_print();;

        polybench_timer_start();;

loop_3:
        for (i = 0; i < n; i++) {
                x[i] = x[i] + z[i];
        }

        polybench_timer_stop();;

        polybench_timer_print();;

        polybench_timer_start();;

        for (i = 0; i < n; i++) {
loop_4:
                for (j = 0; j < n; j++) {
                        w[i] = w[i] + alpha * A[i][j] * x[j];
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;


#pragma endscop
}
