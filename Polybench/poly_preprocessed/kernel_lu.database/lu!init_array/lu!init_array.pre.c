static void init_array(int n, double A[2000+0][2000+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i; j += 1)
         A[i][j] = (double) (-j%n)/n+1;
      for(j = i+1; j <= n-1; j += 1)
         A[i][j] = 0;
      A[i][i] = 1;
   }
   
   /* Make the matrix positive semi-definite. */
   /* not necessary for LU, but using same code as cholesky */
   int r, s, t;
   double (*B)[2000+0][2000+0];
   B = (double (*)[2000+0][2000+0]) polybench_alloc_data((2000+0)*(2000+0), sizeof(double));
   for(r = 0; r <= n-1; r += 1)
      for(s = 0; s <= n-1; s += 1)
         (*B)[r][s] = 0;
   for(t = 0; t <= n-1; t += 1)
      for(r = 0; r <= n-1; r += 1)
         for(s = 0; s <= n-1; s += 1)
            (*B)[r][s] += A[r][t]*A[s][t];
   for(r = 0; r <= n-1; r += 1)
      for(s = 0; s <= n-1; s += 1)
         A[r][s] = (*B)[r][s];
   free((void *) B);
}
