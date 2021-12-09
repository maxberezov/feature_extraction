# 42 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
static
void print_array(int m,
   double cov[ 1200 + 0][1200 + 0])

{
  int i, j;

  fprintf(
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
 stderr
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
 stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
 , "begin dump: %s", "cov");
  for (i = 0; i < m; i++)
    for (j = 0; j < m; j++) {
      if ((i * m + j) % 20 == 0) fprintf (
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
                                         stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
                                                              , "\n");
      fprintf (
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
              stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
                                   , "%0.2lf ", cov[i][j]);
    }
  fprintf(
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
 stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
 , "\nend   dump: %s\n", "cov");
  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/covariance/covariance.c"
 , "==END   DUMP_ARRAYS==\n");
}
