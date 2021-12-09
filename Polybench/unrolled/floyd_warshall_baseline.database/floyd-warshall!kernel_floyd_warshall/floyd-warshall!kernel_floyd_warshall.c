# 63 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/floyd-warshall/floyd-warshall.c"
static
void kernel_floyd_warshall(int n,
      int path[ 2800 + 0][2800 + 0])
{
  int i, j, k;

#pragma scop
  for (k = 0; k < n; k++)
    {
      for(i = 0; i < n; i++){
 for (j = 0; j < n; j++){
   path[i][j] = path[i][j] < path[i][k] + path[k][j] ?
     path[i][j] : path[i][k] + path[k][j];
    }
}
}
#pragma endscop

}
