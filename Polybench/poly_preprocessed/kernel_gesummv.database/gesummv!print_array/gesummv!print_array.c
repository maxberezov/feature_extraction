# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
static
void print_array(int n,
                 double y[ 1300 + 0])

{
        int i;

        fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
       stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
       stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
       , "begin dump: %s", "y");
        for (i = 0; i < n; i++) {
                if (i % 20 == 0) fprintf (
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
                                         stderr
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
                                                              , "\n");
                fprintf (
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
                        stderr
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
                                             , "%0.2lf ", y[i]);
        }
        fprintf(
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
       stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
       , "\nend   dump: %s\n", "y");
        fprintf(
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c" 3 4
       stderr
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/gesummv/gesummv.c"
       , "==END   DUMP_ARRAYS==\n");
}
