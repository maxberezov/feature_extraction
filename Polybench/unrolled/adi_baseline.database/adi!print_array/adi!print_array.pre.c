static void print_array(int n, double u[1000+0][1000+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "u");
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         if ((i*n+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", u[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "u");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
