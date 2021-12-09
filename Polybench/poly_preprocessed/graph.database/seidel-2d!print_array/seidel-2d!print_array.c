# 39 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
static
void print_array(int n,
                 double A[ 2000 + 0][2000 + 0])

{
        int i, j;

        fprintf(
# 46 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
       stderr
# 46 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 47 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
       stderr
# 47 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
       , "begin dump: %s", "A");
        for (i = 0; i < n; i++)
                for (j = 0; j < n; j++) {
                        if ((i * n + j) % 20 == 0) fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
                                                          stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
                                                                               , "\n");
                        fprintf(
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
                               stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
                                                    , "%0.2lf ", A[i][j]);
                }
        fprintf(
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
       stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
       , "\nend   dump: %s\n", "A");
        fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c" 3 4
       stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/seidel-2d/seidel-2d.c"
       , "==END   DUMP_ARRAYS==\n");
}
