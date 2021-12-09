static void kernel_symm(int m, int n, double alpha, double beta, double C[1000+0][1200+0], double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j, k;
   double temp2;
   
   //BLAS PARAMS
   //SIDE = 'L'
   //UPLO = 'L'
   // =>  Form  C := alpha*A*B + beta*C
   // A is MxM
   // B is MxN
   // C is MxN
   //note that due to Fortran array layout, the code below more closely resembles upper triangular case in BLAS
#pragma scop
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         temp2 = 0;
         for(k = 0; k <= i-1; k += 1) {
            C[k][j] += alpha*B[i][j]*A[i][k];
            temp2 += B[k][j]*A[i][k];
         }
         C[i][j] = beta*C[i][j]+alpha*B[i][j]*A[i][i]+alpha*temp2;
      }
#pragma endscop

}
