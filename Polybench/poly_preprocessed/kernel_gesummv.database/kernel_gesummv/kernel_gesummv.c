# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
void kernel_gesummv(int n,
                    double alpha,
                    double beta,
                    double A[ 1300 + 0][1300 + 0],
                    double B[ 1300 + 0][1300 + 0],
                    double tmp[ 1300 + 0],
                    double x[ 1300 + 0],
                    double y[ 1300 + 0])
{
        int i, j;

#pragma scop
        polybench_timer_start();;

        for (i = 0; i < n; i++)
        {
                tmp[i] = 0.0;
                y[i] = 0.0;
loop_1:
                for (j = 0; j < n; j++)
                {
                        tmp[i] = A[i][j] * x[j] + tmp[i];
                        y[i] = B[i][j] * x[j] + y[i];
                }
                y[i] = alpha * tmp[i] + beta * y[i];
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
