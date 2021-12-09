static void kernel_2mm(int ni, int nj, int nk, int nl, double alpha, double beta, double tmp[800+0][900+0], double A[800+0][1100+0], double B[1100+0][900+0], double C[900+0][1200+0], double D[800+0][1200+0])
{
   int i, j, k;
   
   /* D := alpha*A*B*C + beta*D */
#pragma scop
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nj-1; j += 1) {
         tmp[i][j] = 0.0;
         for(k = 0; k <= nk-1; k += 1)
            tmp[i][j] += alpha*A[i][k]*B[k][j];
      }
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         D[i][j] *= beta;
         for(k = 0; k <= nj-1; k += 1)
            D[i][j] += tmp[i][k]*C[k][j];
      }
#pragma endscop

}
