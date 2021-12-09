static void print_array(int m, int n, double A[1000+0][1200+0], double R[1200+0][1200+0], double Q[1000+0][1200+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "R");
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         if ((i*n+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", R[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "R");

   fprintf(stderr, "begin dump: %s", "Q");
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         if ((i*n+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", Q[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "Q");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
