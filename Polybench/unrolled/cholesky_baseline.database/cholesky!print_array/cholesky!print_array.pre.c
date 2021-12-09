static void print_array(int n, double A[2000+0][2000+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "A");
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= i; j += 1) {
         if ((i*n+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", A[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "A");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
