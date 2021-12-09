static void init_array(int n, double r[2000+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1)
      r[i] = n+1-i;
}
