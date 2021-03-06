static void init_array(int ni, int nj, int nk, double *alpha, double *beta, double C[1000+0][1100+0], double A[1000+0][1200+0], double B[1200+0][1100+0])
{
   int i, j;

   *alpha = 1.5;
   *beta = 1.2;
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nj-1; j += 1)
         C[i][j] = (double) ((i*j+1)%ni)/ni;
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nk-1; j += 1)
         A[i][j] = (double) (i*(j+1)%nk)/nk;
   for(i = 0; i <= nk-1; i += 1)
      for(j = 0; j <= nj-1; j += 1)
         B[i][j] = (double) (i*(j+2)%nj)/nj;
}
