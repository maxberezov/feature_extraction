# 42 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
static
void print_array(int n,
   int path[ 2800 + 0][2800 + 0])

{
  int i, j;

  fprintf(
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
 stderr
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
 stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
 , "begin dump: %s", "path");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
      if ((i * n + j) % 20 == 0) fprintf (
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
                                         stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
                                                              , "\n");
      fprintf (
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
              stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
                                   , "%d ", path[i][j]);
    }
  fprintf(
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
 stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
 , "\nend   dump: %s\n", "path");
  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
 , "==END   DUMP_ARRAYS==\n");
}
