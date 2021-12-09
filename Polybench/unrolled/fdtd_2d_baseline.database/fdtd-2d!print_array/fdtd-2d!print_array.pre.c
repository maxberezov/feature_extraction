static void print_array(int nx, int ny, double ex[1000+0][1200+0], double ey[1000+0][1200+0], double hz[1000+0][1200+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "ex");
   for(i = 0; i <= nx-1; i += 1)
      for(j = 0; j <= ny-1; j += 1) {
         if ((i*nx+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", ex[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "ex");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");

   fprintf(stderr, "begin dump: %s", "ey");
   for(i = 0; i <= nx-1; i += 1)
      for(j = 0; j <= ny-1; j += 1) {
         if ((i*nx+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", ey[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "ey");

   fprintf(stderr, "begin dump: %s", "hz");
   for(i = 0; i <= nx-1; i += 1)
      for(j = 0; j <= ny-1; j += 1) {
         if ((i*nx+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2lf ", hz[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "hz");
}
