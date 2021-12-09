static void init_array(int n, double x1[2000+0], double x2[2000+0], double y_1[2000+0], double y_2[2000+0], double A[2000+0][2000+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1) {
      x1[i] = (double) (i%n)/n;
      x2[i] = (double) ((i+1)%n)/n;
      y_1[i] = (double) ((i+3)%n)/n;
      y_2[i] = (double) ((i+4)%n)/n;
      for(j = 0; j <= n-1; j += 1)
         A[i][j] = (double) (i*j%n)/n;
   }
}
