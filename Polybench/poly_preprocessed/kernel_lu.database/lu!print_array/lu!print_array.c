# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
static
void print_array(int n,
double A[ 2000 + 0][2000 + 0])

{
int i, j;

fprintf(
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
stderr
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
stderr
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
, "begin dump: %s", "A");
for (i = 0; i < n; i++)
for (j = 0; j < n; j++) {
if ((i * n + j) % 20 == 0) fprintf (
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
                                   stderr
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
                                                        , "\n");
fprintf (
# 74 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
        stderr
# 74 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
                             , "%0.2lf ", A[i][j]);
}
fprintf(
# 76 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
stderr
# 76 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
, "\nend   dump: %s\n", "A");
fprintf(
# 77 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c" 3 4
stderr
# 77 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
, "==END   DUMP_ARRAYS==\n");
}
