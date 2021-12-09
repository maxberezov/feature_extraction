static void init_array(int m, int n, double A[2100+0][1900+0], double r[2100+0], double p[1900+0])
{
   int i, j;

   for(i = 0; i <= m-1; i += 1)
      p[i] = (double) (i%m)/m;
   for(i = 0; i <= n-1; i += 1) {
      r[i] = (double) (i%n)/n;
      for(j = 0; j <= m-1; j += 1)
         A[i][j] = (double) (i*(j+1)%n)/n;
   }
}
