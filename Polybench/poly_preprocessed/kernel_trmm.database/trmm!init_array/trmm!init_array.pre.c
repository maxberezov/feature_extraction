static void init_array(int m, int n, double *alpha, double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j;

   *alpha = 1.5;
   for(i = 0; i <= m-1; i += 1) {
      for(j = 0; j <= i-1; j += 1)
         A[i][j] = (double) ((i+j)%m)/m;
      A[i][i] = 1.0;
      for(j = 0; j <= n-1; j += 1)
         B[i][j] = (double) ((n+(i-j))%n)/n;
   }
}
