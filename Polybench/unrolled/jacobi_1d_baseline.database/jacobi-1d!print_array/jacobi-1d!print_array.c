# 42 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
static
void print_array(int n,
   double A[ 2000 + 0])

{
  int i;

  fprintf(
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
 stderr
# 49 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
 stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
 , "begin dump: %s", "A");
  for (i = 0; i < n; i++)
    {
      if (i % 20 == 0) fprintf(
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
                              stderr
# 53 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
                                                   , "\n");
      fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
             stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
                                  , "%0.2lf ", A[i]);
    }
  fprintf(
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
 stderr
# 56 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
 , "\nend   dump: %s\n", "A");
  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/jacobi-1d/jacobi-1d.c"
 , "==END   DUMP_ARRAYS==\n");
}
