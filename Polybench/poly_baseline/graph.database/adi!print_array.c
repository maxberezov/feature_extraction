# 41 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
static
void print_array(int n,
   double u[ 1000 + 0][1000 + 0])

{
  int i, j;

  fprintf(
# 48 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
 stderr
# 48 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
 stderr
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
 , "begin dump: %s", "u");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if ((i * n + j) % 20 == 0) fprintf(
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
                                        stderr
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
                                                             , "\n");
      fprintf (
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
              stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
                                   , "%0.2lf ", u[i][j]);
    }
  fprintf(
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
 stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
 , "\nend   dump: %s\n", "u");
  fprintf(
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c" 3 4
 stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
 , "==END   DUMP_ARRAYS==\n");
}
