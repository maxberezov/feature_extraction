void deallocate_2d_array(int **a, int l, int m)
{
   int i;
   for(i = 0; i <= l-1; i += 1)
      free(a[i]);
   free(a);
}
