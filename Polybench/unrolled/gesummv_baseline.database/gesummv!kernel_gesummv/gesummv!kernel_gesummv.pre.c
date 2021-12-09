static void kernel_gesummv(int n, double alpha, double beta, double A[1300+0][1300+0], double B[1300+0][1300+0], double tmp[1300+0], double x[1300+0], double y[1300+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      tmp[i] = 0.0;
      y[i] = 0.0;
      for(j = 0; j <= n-1; j += 1) {
         tmp[i] = A[i][j]*x[j]+tmp[i];
         y[i] = B[i][j]*x[j]+y[i];
      }
      y[i] = alpha*tmp[i]+beta*y[i];
   }
#pragma endscop

}
