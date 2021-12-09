# 44 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
static
void print_array(int nr, int nq, int np,
double A[ 150 + 0][140 + 0][160 + 0])
{
int i, j, k;

fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
, "begin dump: %s", "A");
for (i = 0; i < nr; i++)
for (j = 0; j < nq; j++)
for (k = 0; k < np; k++) {
if ((i*nq*np+j*np+k) % 20 == 0) fprintf (
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
                                        stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
                                                             , "\n");
fprintf (
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
        stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
                             , "%0.2lf ", A[i][j][k]);
}
fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
, "\nend   dump: %s\n", "A");
fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c" 3 4
stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
, "==END   DUMP_ARRAYS==\n");
}
