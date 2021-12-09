static void init_array(int n, double A[1300+0][1300+0], double B[1300+0][1300+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         A[i][j] = ((double) i*(j+2)+2)/n;
         B[i][j] = ((double) i*(j+3)+3)/n;
      }
}
