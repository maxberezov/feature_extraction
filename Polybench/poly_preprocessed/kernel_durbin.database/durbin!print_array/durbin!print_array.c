# 40 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
static
void print_array(int n,
double y[ 2000 + 0])

{
int i;

fprintf(
# 47 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
stderr
# 47 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 48 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
stderr
# 48 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
, "begin dump: %s", "y");
for (i = 0; i < n; i++) {
if (i % 20 == 0) fprintf (
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
                         stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
                                              , "\n");
fprintf (
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
        stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
                             , "%0.2lf ", y[i]);
}
fprintf(
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
, "\nend   dump: %s\n", "y");
fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c" 3 4
stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
, "==END   DUMP_ARRAYS==\n");
}
