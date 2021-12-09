static void init_array(int tmax, int nx, int ny, double ex[1000+0][1200+0], double ey[1000+0][1200+0], double hz[1000+0][1200+0], double _fict_[500+0])
{
   int i, j;

   for(i = 0; i <= tmax-1; i += 1)
      _fict_[i] = (double) i;
   for(i = 0; i <= nx-1; i += 1)
      for(j = 0; j <= ny-1; j += 1) {
         ex[i][j] = (double) i*(j+1)/nx;
         ey[i][j] = (double) i*(j+2)/ny;
         hz[i][j] = (double) i*(j+3)/nx;
      }
}
