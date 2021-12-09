static void kernel_floyd_warshall(int n, int path[2800+0][2800+0])
{
   int i, j, k;

#pragma scop
   for(k = 0; k <= n-1; k += 1)
      for(i = 0; i <= n-1; i += 1)
         for(j = 0; j <= n-1; j += 1)
            path[i][j] = path[i][j]<path[i][k]+path[k][j]?path[i][j]:path[i][k]+path[k][j];
#pragma endscop

}
