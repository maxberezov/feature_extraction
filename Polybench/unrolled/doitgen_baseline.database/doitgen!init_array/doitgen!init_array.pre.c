static void init_array(int nr, int nq, int np, double A[150+0][140+0][160+0], double C4[160+0][160+0])
{
   int i, j, k;

   for(i = 0; i <= nr-1; i += 1)
      for(j = 0; j <= nq-1; j += 1)
         for(k = 0; k <= np-1; k += 1)
            A[i][j][k] = (double) ((i*j+k)%np)/np;
   for(i = 0; i <= np-1; i += 1)
      for(j = 0; j <= np-1; j += 1)
         C4[i][j] = (double) (i*j%np)/np;
}
