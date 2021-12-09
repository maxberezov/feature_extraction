static void init_array(int ni, int nj, int nk, int nl, int nm, double A[800+0][1000+0], double B[1000+0][900+0], double C[900+0][1200+0], double D[1200+0][1100+0])
{
   int i, j;

   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nk-1; j += 1)
         A[i][j] = (double) ((i*j+1)%ni)/(5*ni);
   for(i = 0; i <= nk-1; i += 1)
      for(j = 0; j <= nj-1; j += 1)
         B[i][j] = (double) ((i*(j+1)+2)%nj)/(5*nj);
   for(i = 0; i <= nj-1; i += 1)
      for(j = 0; j <= nm-1; j += 1)
         C[i][j] = (double) (i*(j+3)%nl)/(5*nl);
   for(i = 0; i <= nm-1; i += 1)
      for(j = 0; j <= nl-1; j += 1)
         D[i][j] = (double) ((i*(j+2)+2)%nk)/(5*nk);
}
