# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
static
void print_array(int n,
   double C[ 1200 + 0][1200 + 0])
{
  int i, j;

  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
 stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
 , "begin dump: %s", "C");
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++) {
 if ((i * n + j) % 20 == 0) fprintf (
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
                                    stderr
# 61 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
                                                         , "\n");
 fprintf (
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
         stderr
# 62 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
                              , "%0.2lf ", C[i][j]);
    }
  fprintf(
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
 stderr
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
 , "\nend   dump: %s\n", "C");
  fprintf(
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c" 3 4
 stderr
# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/blas/syr2k/syr2k.c"
 , "==END   DUMP_ARRAYS==\n");
}
