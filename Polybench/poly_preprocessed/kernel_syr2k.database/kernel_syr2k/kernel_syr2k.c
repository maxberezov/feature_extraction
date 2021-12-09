# 71 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/syr2k/syr2k.c"
void kernel_syr2k(int n, int m,
                  double alpha,
                  double beta,
                  double C[ 1200 + 0][1200 + 0],
                  double A[ 1200 + 0][1000 + 0],
                  double B[ 1200 + 0][1000 + 0])
{
        int i, j, k;

//BLAS PARAMS
//UPLO  = 'L'
//TRANS = 'N'
//A is NxM
//B is NxM
//C is NxN
#pragma scop
        polybench_timer_start();;

        for (i = 0; i < n; i++) {
                for (j = 0; j <= i; j++) {
                        C[i][j] *= beta;
                }
                for (k = 0; k < m; k++) {
loop_1:
                        for (j = 0; j <= i; j++)
                        {
                                C[i][j] += A[j][k]*alpha*B[i][k] + B[j][k]*alpha*A[i][k];
                        }
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
