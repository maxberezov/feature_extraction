static void kernel_lu(int n, double A[2000+0][2000+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i-1; j += 1) {
         for(k = 0; k <= j-1; k += 1)
            A[i][j] -= A[i][k]*A[k][j];
         A[i][j] /= A[j][j];
      }
      for(j = i; j <= n-1; j += 1)
         for(k = 0; k <= i-1; k += 1)
            A[i][j] -= A[i][k]*A[k][j];
   }
#pragma endscop

}
