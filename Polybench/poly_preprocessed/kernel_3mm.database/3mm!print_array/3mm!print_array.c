# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
static
void print_array(int ni, int nl,
double G[ 800 + 0][1100 + 0])
{
int i, j;

fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
, "==BEGIN DUMP_ARRAYS==\n");
fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
, "begin dump: %s", "G");
for (i = 0; i < ni; i++)
for (j = 0; j < nl; j++) {
if ((i * ni + j) % 20 == 0) fprintf (
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
                                    stderr
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
                                                         , "\n");
fprintf (
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
        stderr
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
                             , "%0.2lf ", G[i][j]);
}
fprintf(
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
stderr
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
, "\nend   dump: %s\n", "G");
fprintf(
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c" 3 4
stderr
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
, "==END   DUMP_ARRAYS==\n");
}
