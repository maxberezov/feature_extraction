# 45 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
static
void print_array(int m, int n,
double s[ 1900 + 0],
double q[ 2100 + 0])

{
int i;

fprintf(
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "begin dump: %s", "s");
for (i = 0; i < m; i++) {
if (i % 20 == 0) fprintf (
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
                         stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
                                              , "\n");
fprintf (
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
        stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
                             , "%0.2lf ", s[i]);
}
fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "\nend   dump: %s\n", "s");
fprintf(
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "begin dump: %s", "q");
for (i = 0; i < n; i++) {
if (i % 20 == 0) fprintf (
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
                         stderr
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
                                              , "\n");
fprintf (
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
        stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
                             , "%0.2lf ", q[i]);
}
fprintf(
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "\nend   dump: %s\n", "q");
fprintf(
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c" 3 4
stderr
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/bicg/bicg.c"
, "==END   DUMP_ARRAYS==\n");
}
