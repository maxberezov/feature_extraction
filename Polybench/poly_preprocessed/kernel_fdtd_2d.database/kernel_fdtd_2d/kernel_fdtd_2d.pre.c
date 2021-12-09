void kernel_fdtd_2d(int tmax, int nx, int ny, double ex[1000+0][1200+0], double ey[1000+0][1200+0], double hz[1000+0][1200+0], double _fict_[500+0])
{
   int t, i, j;

#pragma scop
   for(t = 0; t <= tmax-1; t += 1) {
      for(j = 0; j <= ny-1; j += 1)
         ey[0][j] = _fict_[t];
      for(i = 1; i <= nx-1; i += 1)
         for(j = 0; j <= ny-1; j += 1)
            ey[i][j] = ey[i][j]-0.5*(hz[i][j]-hz[i-1][j]);
      for(i = 0; i <= nx-1; i += 1)
         for(j = 1; j <= ny-1; j += 1)
            ex[i][j] = ex[i][j]-0.5*(hz[i][j]-hz[i][j-1]);
      for(i = 0; i <= nx-1-1; i += 1)
loop_1:
         for(j = 0; j <= ny-1-1; j += 1)
            hz[i][j] = hz[i][j]-0.7*(ex[i][j+1]-ex[i][j]+ey[i+1][j]-ey[i][j]);
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
