# 43 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
static
void print_array(int n,
                 double A[ 1300 + 0][1300 + 0])

{
        int i, j;

        fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
       stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
       stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
       , "begin dump: %s", "A");
        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++) {
                        if ((i * n + j) % 20 == 0) fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
                                                          stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
                                                                               , "\n");
                        fprintf(
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
                               stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
                                                    , "%0.2lf ", A[i][j]);
                }
        fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
       stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
       , "\nend   dump: %s\n", "A");
        fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c" 3 4
       stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/jacobi-2d/jacobi-2d.c"
       , "==END   DUMP_ARRAYS==\n");
}
