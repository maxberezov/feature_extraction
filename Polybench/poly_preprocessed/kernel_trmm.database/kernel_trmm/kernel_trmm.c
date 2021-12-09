# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/trmm/trmm.c"
void kernel_trmm(int m, int n,
                 double alpha,
                 double A[ 1000 + 0][1000 + 0],
                 double B[ 1000 + 0][1200 + 0])
{
        int i, j, k;

//BLAS parameters
//SIDE   = 'L'
//UPLO   = 'L'
//TRANSA = 'T'
//DIAG   = 'U'
// => Form  B := alpha*A**T*B.
// A is MxM
// B is MxN
#pragma scop
        polybench_timer_start();;

        for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
loop_1:
                        for (k = i+1; k < m; k++) {
                                B[i][j] += A[k][i] * B[k][j];
                        }
                        B[i][j] = alpha * B[i][j];
                }
        }
        polybench_timer_stop();;

        polybench_timer_print();;

#pragma endscop

}
