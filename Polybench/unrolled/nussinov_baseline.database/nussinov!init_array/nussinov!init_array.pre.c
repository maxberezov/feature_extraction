static void init_array(int n, base seq[2500+0], int table[2500+0][2500+0])
{
   int i, j;
   
   //base is AGCT/0..3
   for(i = 0; i <= n-1; i += 1)
      seq[i] = (base) ((i+1)%4);

   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         table[i][j] = 0;
}
