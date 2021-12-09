static void init_array(int m, int n, double *float_n, double data[1400+0][1200+0])
{
   int i, j;

   *float_n = (double) n;

   for(i = 0; i <= 1399; i += 1)
      for(j = 0; j <= 1199; j += 1)
         data[i][j] = (double) i*j/1200;
}
