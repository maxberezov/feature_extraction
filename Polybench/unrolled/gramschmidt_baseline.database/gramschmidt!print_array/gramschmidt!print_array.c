# 46 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
static
void print_array(int m, int n,
   double A[ 1000 + 0][1200 + 0],
   double R[ 1200 + 0][1200 + 0],
   double Q[ 1000 + 0][1200 + 0])
{
  int i, j;

  fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "begin dump: %s", "R");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
 if ((i*n+j) % 20 == 0) fprintf (
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
                                stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
                                                     , "\n");
 fprintf (
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
         stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
                              , "%0.2lf ", R[i][j]);
    }
  fprintf(
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "\nend   dump: %s\n", "R");

  fprintf(
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "begin dump: %s", "Q");
  for (i = 0; i < m; i++)
    for (j = 0; j < n; j++) {
 if ((i*n+j) % 20 == 0) fprintf (
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
                                stderr
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
                                                     , "\n");
 fprintf (
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
         stderr
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
                              , "%0.2lf ", Q[i][j]);
    }
  fprintf(
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "\nend   dump: %s\n", "Q");
  fprintf(
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c" 3 4
 stderr
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/gramschmidt/gramschmidt.c"
 , "==END   DUMP_ARRAYS==\n");
}
