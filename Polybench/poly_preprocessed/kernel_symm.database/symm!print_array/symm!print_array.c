# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
static
void print_array(int m, int n,
                 double C[ 1000 + 0][1200 + 0])
{
        int i, j;

        fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
       stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
       stderr
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
       , "begin dump: %s", "C");
        for (i = 0; i < m; i++)
                for (j = 0; j < n; j++) {
                        if ((i * m + j) % 20 == 0) fprintf (
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
                                                           stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
                                                                                , "\n");
                        fprintf (
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
                                stderr
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
                                                     , "%0.2lf ", C[i][j]);
                }
        fprintf(
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
       stderr
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
       , "\nend   dump: %s\n", "C");
        fprintf(
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c" 3 4
       stderr
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/symm/symm.c"
       , "==END   DUMP_ARRAYS==\n");
}
