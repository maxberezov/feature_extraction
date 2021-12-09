# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/datamining/covariance/covariance.c"
void kernel_covariance(int m, int n,
                       double float_n,
                       double data[ 1400 + 0][1200 + 0],
                       double cov[ 1200 + 0][1200 + 0],
                       double mean[ 1200 + 0])
{
        int i, j, k;

#pragma scop
        polybench_timer_start();;

        for (j = 0; j < m; j++)
        {
                mean[j] = 0.0;
loop_1:
                for (i = 0; i < n; i++) {
                        mean[j] += data[i][j];
                }
                mean[j] /= float_n;
        }

        polybench_timer_stop();;

        polybench_timer_print();;

        polybench_timer_start();;

        for (i = 0; i < n; i++) {
loop_2:
                for (j = 0; j < m; j++) {
                        data[i][j] -= mean[j];
                }
        }

        polybench_timer_stop();;

        polybench_timer_print();;

        polybench_timer_start();;

        for (i = 0; i < m; i++) {
                for (j = i; j < m; j++)
                {
                        cov[i][j] = 0.0;
loop_3:
                        for (k = 0; k < n; k++) {
                                cov[i][j] += data[k][i] * data[k][j];
                        }
                        cov[i][j] /= (float_n - 1.0);
                        cov[j][i] = cov[i][j];
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
