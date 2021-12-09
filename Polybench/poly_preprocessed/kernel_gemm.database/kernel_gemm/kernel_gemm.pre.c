void kernel_gemm(int ni, int nj, int nk, double alpha, double beta, double C[1000+0][1100+0], double A[1000+0][1200+0], double B[1200+0][1100+0])
{
   int i, j, k;
   
   //BLAS PARAMS
   //TRANSA = 'N'
   //TRANSB = 'N'
   // => Form C := alpha*A*B + beta*C,
   //A is NIxNK
   //B is NKxNJ
   //C is NIxNJ
#pragma scop
   polybench_timer_start();

   for(i = 0; i <= ni-1; i += 1) {
      for(j = 0; j <= nj-1; j += 1)
         C[i][j] *= beta;
      for(k = 0; k <= nk-1; k += 1)
loop_1:
         for(j = 0; j <= nj-1; j += 1)
            C[i][j] += alpha*A[i][k]*B[k][j];
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
