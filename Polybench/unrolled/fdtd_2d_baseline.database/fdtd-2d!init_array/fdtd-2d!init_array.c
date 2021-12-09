# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/fdtd-2d/fdtd-2d.c"
static
void init_array (int tmax,
   int nx,
   int ny,
   double ex[ 1000 + 0][1200 + 0],
   double ey[ 1000 + 0][1200 + 0],
   double hz[ 1000 + 0][1200 + 0],
   double _fict_[ 500 + 0])
{
  int i, j;

  for (i = 0; i < tmax; i++)
    _fict_[i] = (double) i;
  for (i = 0; i < nx; i++)
    for (j = 0; j < ny; j++)
      {
 ex[i][j] = ((double) i*(j+1)) / nx;
 ey[i][j] = ((double) i*(j+2)) / ny;
 hz[i][j] = ((double) i*(j+3)) / nx;
      }
}
