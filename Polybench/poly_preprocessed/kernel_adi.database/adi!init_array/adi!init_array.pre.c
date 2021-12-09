static void init_array(int n, double u[1000+0][1000+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         u[i][j] = (double) (i+n-j)/n;
}
