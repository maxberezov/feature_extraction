static void print_array(int n, double x1[2000+0], double x2[2000+0])
{
   int i;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "x1");
   for(i = 0; i <= n-1; i += 1) {
      if (i%20==0)
         fprintf(stderr, "\n");
      fprintf(stderr, "%0.2lf ", x1[i]);
   }
   fprintf(stderr, "\nend   dump: %s\n", "x1");

   fprintf(stderr, "begin dump: %s", "x2");
   for(i = 0; i <= n-1; i += 1) {
      if (i%20==0)
         fprintf(stderr, "\n");
      fprintf(stderr, "%0.2lf ", x2[i]);
   }
   fprintf(stderr, "\nend   dump: %s\n", "x2");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
