static void kernel_3mm(int ni, int nj, int nk, int nl, int nm, double E[800+0][900+0], double A[800+0][1000+0], double B[1000+0][900+0], double F[900+0][1100+0], double C[900+0][1200+0], double D[1200+0][1100+0], double G[800+0][1100+0])
{
   int i, j, k;
   
   /* E := A*B */
#pragma scop
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nj-1; j += 1) {
         E[i][j] = 0.0;
         for(k = 0; k <= nk-1; k += 1)
            E[i][j] += A[i][k]*B[k][j];
      }
   /* F := C*D */
   for(i = 0; i <= nj-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         F[i][j] = 0.0;
         for(k = 0; k <= nm-1; k += 1)
            F[i][j] += C[i][k]*D[k][j];
      }
   /* G := E*F */
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         G[i][j] = 0.0;
         for(k = 0; k <= nj-1; k += 1)
            G[i][j] += E[i][k]*F[k][j];
      }
#pragma endscop

}
