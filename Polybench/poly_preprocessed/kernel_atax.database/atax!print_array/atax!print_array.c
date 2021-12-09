# 44 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
static
void print_array(int n,
double y[ 2100 + 0])

{
int i;

fprintf(
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
stderr
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
, "begin dump: %s", "y");
for (i = 0; i < n; i++) {
if (i % 20 == 0) fprintf (
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
                         stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
                                              , "\n");
fprintf (
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
        stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
                             , "%0.2lf ", y[i]);
}
fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
, "\nend   dump: %s\n", "y");
fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c" 3 4
stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
, "==END   DUMP_ARRAYS==\n");
}
