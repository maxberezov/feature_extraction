# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/seidel-2d/seidel-2d.c"
static
void kernel_seidel_2d(int tsteps,
        int n,
        double A[ 2000 + 0][2000 + 0])
{
  int t, i, j;

#pragma scop
  for (t = 0; t <= tsteps - 1; t++){
    for (i = 1; i<= n - 2; i++){
      for (j = 1; j <= n - 2; j++){
 A[i][j] = (A[i-1][j-1] + A[i-1][j] + A[i-1][j+1]
     + A[i][j-1] + A[i][j] + A[i][j+1]
     + A[i+1][j-1] + A[i+1][j] + A[i+1][j+1])/9.0;}
}
}
#pragma endscop

}
