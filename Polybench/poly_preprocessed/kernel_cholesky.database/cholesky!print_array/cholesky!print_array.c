# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
static
void print_array(int n,
double A[ 2000 + 0][2000 + 0])

{
int i, j;

fprintf(
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
stderr
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
stderr
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
, "begin dump: %s", "A");
for (i = 0; i < n; i++)
for (j = 0; j <= i; j++) {
if ((i * n + j) % 20 == 0) fprintf (
# 72 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
                                   stderr
# 72 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
                                                        , "\n");
fprintf (
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
        stderr
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
                             , "%0.2lf ", A[i][j]);
}
fprintf(
# 75 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
stderr
# 75 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
, "\nend   dump: %s\n", "A");
fprintf(
# 76 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c" 3 4
stderr
# 76 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/cholesky/cholesky.c"
, "==END   DUMP_ARRAYS==\n");
}
