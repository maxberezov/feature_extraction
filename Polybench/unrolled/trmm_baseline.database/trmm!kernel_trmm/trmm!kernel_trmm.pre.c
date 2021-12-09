static void kernel_trmm(int m, int n, double alpha, double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j, k;
   
   //BLAS parameters
   //SIDE   = 'L'
   //UPLO   = 'L'
   //TRANSA = 'T'
   //DIAG   = 'U'
   // => Form  B := alpha*A**T*B.
   // A is MxM
   // B is MxN
#pragma scop
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         for(k = i+1; k <= m-1; k += 1)
            B[i][j] += A[k][i]*B[k][j];
         B[i][j] = alpha*B[i][j];
      }
#pragma endscop

}
