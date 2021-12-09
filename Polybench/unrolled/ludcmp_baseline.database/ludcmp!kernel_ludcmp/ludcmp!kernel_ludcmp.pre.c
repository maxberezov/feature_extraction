static void kernel_ludcmp(int n, double A[2000+0][2000+0], double b[2000+0], double x[2000+0], double y[2000+0])
{
   int i, j, k;

   double w;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i-1; j += 1) {
         w = A[i][j];
         for(k = 0; k <= j-1; k += 1)
            w -= A[i][k]*A[k][j];
         A[i][j] = w/A[j][j];
      }
      for(j = i; j <= n-1; j += 1) {
         w = A[i][j];
         for(k = 0; k <= i-1; k += 1)
            w -= A[i][k]*A[k][j];
         A[i][j] = w;
      }
   }

   for(i = 0; i <= n-1; i += 1) {
      w = b[i];
      for(j = 0; j <= i-1; j += 1)
         w -= A[i][j]*y[j];
      y[i] = w;
   }

   for(i = n-1; i >= 0; i += -1) {
      w = y[i];
      for(j = i+1; j <= n-1; j += 1)
         w -= A[i][j]*x[j];
      x[i] = w/A[i][i];
   }
#pragma endscop

}
