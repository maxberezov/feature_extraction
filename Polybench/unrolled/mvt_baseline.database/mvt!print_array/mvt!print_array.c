# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
static
void print_array(int n,
   double x1[ 2000 + 0],
   double x2[ 2000 + 0])

{
  int i;

  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "begin dump: %s", "x1");
  for (i = 0; i < n; i++) {
    if (i % 20 == 0) fprintf (
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
                             stderr
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
                                                  , "\n");
    fprintf (
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
            stderr
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
                                 , "%0.2lf ", x1[i]);
  }
  fprintf(
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "\nend   dump: %s\n", "x1");

  fprintf(
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "begin dump: %s", "x2");
  for (i = 0; i < n; i++) {
    if (i % 20 == 0) fprintf (
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
                             stderr
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
                                                  , "\n");
    fprintf (
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
            stderr
# 68 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
                                 , "%0.2lf ", x2[i]);
  }
  fprintf(
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 70 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "\nend   dump: %s\n", "x2");
  fprintf(
# 71 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c" 3 4
 stderr
# 71 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
 , "==END   DUMP_ARRAYS==\n");
}
