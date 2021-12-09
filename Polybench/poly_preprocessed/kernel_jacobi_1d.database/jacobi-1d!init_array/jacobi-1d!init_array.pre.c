static void init_array(int n, double A[2000+0], double B[2000+0])
{
   int i;

   for(i = 0; i <= n-1; i += 1) {
      A[i] = ((double) i+2)/n;
      B[i] = ((double) i+3)/n;
   }
}
