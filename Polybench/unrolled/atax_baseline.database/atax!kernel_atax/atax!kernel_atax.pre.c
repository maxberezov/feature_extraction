static void kernel_atax(int m, int n, double A[1900+0][2100+0], double x[2100+0], double y[2100+0], double tmp[1900+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1)
      y[i] = 0;
   for(i = 0; i <= m-1; i += 1) {
      tmp[i] = 0.0;
      for(j = 0; j <= n-1; j += 1)
         tmp[i] = tmp[i]+A[i][j]*x[j];
      for(j = 0; j <= n-1; j += 1)
         y[j] = y[j]+A[i][j]*tmp[i];
   }
#pragma endscop

}
