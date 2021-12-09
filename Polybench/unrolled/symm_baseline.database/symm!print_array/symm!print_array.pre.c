static void print_array(int m, int n, double C[1000+0][1200+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "C");
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         if ((i*m+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", C[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "C");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}