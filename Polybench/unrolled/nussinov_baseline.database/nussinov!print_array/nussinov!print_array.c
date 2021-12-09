# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
static
void print_array(int n,
   int table[ 2500 + 0][2500 + 0])

{
  int i, j;
  int t = 0;

  fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
 stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
 stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
 , "begin dump: %s", "table");
  for (i = 0; i < n; i++) {
    for (j = i; j < n; j++) {
      if (t % 20 == 0) fprintf (
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
                               stderr
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
                                                    , "\n");
      fprintf (
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
              stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
                                   , "%d ", table[i][j]);
      t++;
    }
  }
  fprintf(
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
 stderr
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
 , "\nend   dump: %s\n", "table");
  fprintf(
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c" 3 4
 stderr
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
 , "==END   DUMP_ARRAYS==\n");
}
