void deallocate_3d_array(int ***a, int l, int m, int k)
{
   int i, j;
   for(i = 0; i <= l-1; i += 1) {
      {
         int j;
         for(j = 0; j <= m-1; j += 1)
            free(a[i][j]);
      }
      free(a[i]);
   }
   free(a);
}
