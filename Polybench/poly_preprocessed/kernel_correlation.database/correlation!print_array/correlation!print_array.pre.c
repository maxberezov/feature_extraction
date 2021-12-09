static void print_array(int m, double corr[1200+0][1200+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "corr");
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= m-1; j += 1) {
         if ((i*m+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", corr[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "corr");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
