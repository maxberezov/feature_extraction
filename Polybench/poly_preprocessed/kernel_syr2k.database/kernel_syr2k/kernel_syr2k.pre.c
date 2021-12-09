void kernel_syr2k(int n, int m, double alpha, double beta, double C[1200+0][1200+0], double A[1200+0][1000+0], double B[1200+0][1000+0])
{
   int i, j, k;
   
   //BLAS PARAMS
   //UPLO  = 'L'
   //TRANS = 'N'
   //A is NxM
   //B is NxM
   //C is NxN
#pragma scop
   polybench_timer_start();

   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i; j += 1)
         C[i][j] *= beta;
      for(k = 0; k <= m-1; k += 1)
loop_1:
         for(j = 0; j <= i; j += 1)
            C[i][j] += A[j][k]*alpha*B[i][k]+B[j][k]*alpha*A[i][k];
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
