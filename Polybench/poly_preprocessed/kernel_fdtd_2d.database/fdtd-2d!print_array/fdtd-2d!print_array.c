# 50 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
static
void print_array(int nx,
                 int ny,
                 double ex[ 1000 + 0][1200 + 0],
                 double ey[ 1000 + 0][1200 + 0],
                 double hz[ 1000 + 0][1200 + 0])
{
        int i, j;

        fprintf(
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 59 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "==BEGIN DUMP_ARRAYS==\n");
        fprintf(
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "begin dump: %s", "ex");
        for (i = 0; i < nx; i++)
                for (j = 0; j < ny; j++) {
                        if ((i * nx + j) % 20 == 0) fprintf(
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                                                           stderr
# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                                                , "\n");
                        fprintf(
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                               stderr
# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                    , "%0.2lf ", ex[i][j]);
                }
        fprintf(
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 66 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "\nend   dump: %s\n", "ex");
        fprintf(
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 67 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "==END   DUMP_ARRAYS==\n");

        fprintf(
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 69 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "begin dump: %s", "ey");
        for (i = 0; i < nx; i++)
                for (j = 0; j < ny; j++) {
                        if ((i * nx + j) % 20 == 0) fprintf(
# 72 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                                                           stderr
# 72 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                                                , "\n");
                        fprintf(
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                               stderr
# 73 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                    , "%0.2lf ", ey[i][j]);
                }
        fprintf(
# 75 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 75 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "\nend   dump: %s\n", "ey");

        fprintf(
# 77 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 77 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "begin dump: %s", "hz");
        for (i = 0; i < nx; i++)
                for (j = 0; j < ny; j++) {
                        if ((i * nx + j) % 20 == 0) fprintf(
# 80 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                                                           stderr
# 80 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                                                , "\n");
                        fprintf(
# 81 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
                               stderr
# 81 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
                                                    , "%0.2lf ", hz[i][j]);
                }
        fprintf(
# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c" 3 4
       stderr
# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
       , "\nend   dump: %s\n", "hz");
}
