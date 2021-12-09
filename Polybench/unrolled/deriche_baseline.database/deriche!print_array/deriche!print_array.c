# 43 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
static
void print_array(int w, int h,
   float imgOut[ 4096 + 0][2160 + 0])

{
  int i, j;

  fprintf(
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
 stderr
# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
 , "==BEGIN DUMP_ARRAYS==\n");
  fprintf(
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
 stderr
# 51 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
 , "begin dump: %s", "imgOut");
  for (i = 0; i < w; i++)
    for (j = 0; j < h; j++) {
      if ((i * h + j) % 20 == 0) fprintf(
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
                                        stderr
# 54 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
                                                             , "\n");
      fprintf(
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
             stderr
# 55 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
                                  , "%0.2f ", imgOut[i][j]);
    }
  fprintf(
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
 stderr
# 57 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
 , "\nend   dump: %s\n", "imgOut");
  fprintf(
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c" 3 4
 stderr
# 58 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
 , "==END   DUMP_ARRAYS==\n");
}
