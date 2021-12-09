# 45 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
static
void print_array(int n,
   double x[ 2000 + 0])

{
  int i;

  fprintf(
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
 stderr
# 52 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
 stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
 , "begin dump: %s", "x");
  for (i = 0; i < n; i++) {
    fprintf (
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
            stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
                                 , "%0.2lf ", x[i]);
    if (i % 20 == 0) fprintf (
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
                             stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
                                                  , "\n");
  }
  fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
 stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
 , "\nend   dump: %s\n", "x");
  fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c" 3 4
 stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/trisolv/trisolv.c"
 , "==END   DUMP_ARRAYS==\n");
}
