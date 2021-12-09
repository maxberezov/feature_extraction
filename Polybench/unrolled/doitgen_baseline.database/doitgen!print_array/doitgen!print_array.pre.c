static void print_array(int nr, int nq, int np, double A[150+0][140+0][160+0])
{
   int i, j, k;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "A");
   for(i = 0; i <= nr-1; i += 1)
      for(j = 0; j <= nq-1; j += 1)
         for(k = 0; k <= np-1; k += 1) {
            if ((i*nq*np+j*np+k)%20==0)
               fprintf(stderr, "\n");
            fprintf(stderr, "%0.2lf ", A[i][j][k]);
         }
   fprintf(stderr, "\nend   dump: %s\n", "A");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
