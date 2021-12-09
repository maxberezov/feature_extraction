static void print_array(int w, int h, float imgOut[4096+0][2160+0])
{
   int i, j;

   fprintf(stderr, "==BEGIN DUMP_ARRAYS==\n");
   fprintf(stderr, "begin dump: %s", "imgOut");
   for(i = 0; i <= w-1; i += 1)
      for(j = 0; j <= h-1; j += 1) {
         if ((i*h+j)%20==0)
            fprintf(stderr, "\n");
         fprintf(stderr, "%0.2f ", imgOut[i][j]);
      }
   fprintf(stderr, "\nend   dump: %s\n", "imgOut");
   fprintf(stderr, "==END   DUMP_ARRAYS==\n");
}
