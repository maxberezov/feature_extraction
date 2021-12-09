static void print_array(int n, double x[2000+0])
{
   int i;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "x");
   for(i = 0; i <= n-1; i += 1) {
      if (i%20==0)
         fprintf(stderr, "\n");
      fprintf(stderr, "%0.2lf ", x[i]);
   }
   fprintf(stderr, "\nend   dump: %s\n", "x");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
