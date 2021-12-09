static void print_array(int n, int table[2500+0][2500+0])
{
   int i, j;
   int t = 0;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "table");
   for(i = 0; i <= n-1; i += 1)
      for(j = i; j <= n-1; j += 1) {
         if (t%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%d ", table[i][j]);
         t++;
      }
   fprintf(stderr, "\nend   dump: %s\n", "table");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
