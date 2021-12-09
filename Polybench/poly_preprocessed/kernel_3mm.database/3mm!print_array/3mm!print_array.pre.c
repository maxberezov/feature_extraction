static void print_array(int ni, int nl, double G[800+0][1100+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "G");
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         if ((i*ni+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", G[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "G");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
