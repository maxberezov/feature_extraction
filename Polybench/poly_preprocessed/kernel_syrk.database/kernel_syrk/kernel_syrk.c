# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/syrk/syrk.c"
void kernel_syrk(int n, int m,
                 double alpha,
                 double beta,
                 double C[ 1200 + 0][1200 + 0],
                 double A[ 1200 + 0][1000 + 0])
{
        int i, j, k;

//BLAS PARAMS
//TRANS = 'N'
//UPLO  = 'L'
// =>  Form  C := alpha*A*A**T + beta*C.
//A is NxM
//C is NxN
#pragma scop
        polybench_timer_start();;

        for (i = 0; i < n; i++) {
                for (j = 0; j <= i; j++) {
                        C[i][j] *= beta;
                }
                for (k = 0; k < m; k++) {
loop_1:
                        for (j = 0; j <= i; j++) {
                                C[i][j] += alpha * A[i][k] * A[j][k];
                        }
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
