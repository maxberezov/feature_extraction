static void print_array(int n, int path[2800+0][2800+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "path");
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         if ((i*n+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%d ", path[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "path");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
