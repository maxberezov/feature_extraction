static void init_array(int m, int n, double A[1900+0][2100+0], double x[2100+0])
{
   int i, j;
   double fn;
   fn = (double) n;

   for(i = 0; i <= n-1; i += 1)
      x[i] = 1+i/fn;
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         A[i][j] = (double) ((i+j)%n)/(5*m);
}
