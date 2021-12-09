# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
static
void print_array(int n,
double x[ 2000 + 0])

{
int i;

fprintf(
# 80 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
stderr
# 80 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 81 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
stderr
# 81 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
, "begin dump: %s", "x");
for (i = 0; i < n; i++) {
if (i % 20 == 0) fprintf (
# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
                         stderr
# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
                                              , "\n");
fprintf (
# 84 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
        stderr
# 84 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
                             , "%0.2lf ", x[i]);
}
fprintf(
# 86 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
stderr
# 86 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
, "\nend   dump: %s\n", "x");
fprintf(
# 87 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c" 3 4
stderr
# 87 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
, "==END   DUMP_ARRAYS==\n");
}
