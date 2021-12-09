static void init_array(int n, int path[2800+0][2800+0])
{
   int i, j;

   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         path[i][j] = i*j%7+1;
         if ((i+j)%13==0||(i+j)%7==0||(i+j)%11==0)
            path[i][j] = 999;
      }
}
