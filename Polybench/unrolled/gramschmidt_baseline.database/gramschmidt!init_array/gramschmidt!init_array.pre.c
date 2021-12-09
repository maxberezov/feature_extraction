static void init_array(int m, int n, double A[1000+0][1200+0], double R[1200+0][1200+0], double Q[1000+0][1200+0])
{
   int i, j;

   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         A[i][j] = (double) (i*j%m)/m*100+10;
         Q[i][j] = 0.0;
      }
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         R[i][j] = 0.0;
}
