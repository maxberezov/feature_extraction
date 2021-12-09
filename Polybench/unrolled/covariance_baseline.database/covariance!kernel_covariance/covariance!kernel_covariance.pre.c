static void kernel_covariance(int m, int n, double float_n, double data[1400+0][1200+0], double cov[1200+0][1200+0], double mean[1200+0])
{
   int i, j, k;

#pragma scop
   for(j = 0; j <= m-1; j += 1) {
      mean[j] = 0.0;
      for(i = 0; i <= n-1; i += 1)
         mean[j] += data[i][j];
      mean[j] /= float_n;
   }

   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= m-1; j += 1)
         data[i][j] -= mean[j];

   for(i = 0; i <= m-1; i += 1)
      for(j = i; j <= m-1; j += 1) {
         cov[i][j] = 0.0;
         for(k = 0; k <= n-1; k += 1)
            cov[i][j] += data[k][i]*data[k][j];
         cov[i][j] /= float_n-1.0;
         cov[j][i] = cov[i][j];
      }
#pragma endscop

}
