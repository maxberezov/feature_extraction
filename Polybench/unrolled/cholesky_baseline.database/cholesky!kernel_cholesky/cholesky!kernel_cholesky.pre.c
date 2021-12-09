static void kernel_cholesky(int n, double A[2000+0][2000+0])
{
   int i, j, k;
   
   
#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      //j<i
      for(j = 0; j <= i-1; j += 1) {
         for(k = 0; k <= j-1; k += 1)
            A[i][j] -= A[i][k]*A[j][k];
         A[i][j] /= A[j][j];
      }
      // i==j case
      for(k = 0; k <= i-1; k += 1)
         A[i][i] -= A[i][k]*A[i][k];
      A[i][i] = sqrt(A[i][i]);
   }
#pragma endscop

}
