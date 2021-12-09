static void init_array(int m, int n, double *alpha, double *beta, double C[1000+0][1200+0], double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j;

   *alpha = 1.5;
   *beta = 1.2;
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         C[i][j] = (double) ((i+j)%100)/m;
         B[i][j] = (double) ((n+i-j)%100)/m;
      }
   for(i = 0; i <= m-1; i += 1) {
      for(j = 0; j <= i; j += 1)
         A[i][j] = (double) ((i+j)%100)/m;
      for(j = i+1; j <= m-1; j += 1)
         A[i][j] = -999;
   }
}
