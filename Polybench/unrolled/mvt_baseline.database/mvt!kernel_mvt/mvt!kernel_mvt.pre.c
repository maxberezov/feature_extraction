static void kernel_mvt(int n, double x1[2000+0], double x2[2000+0], double y_1[2000+0], double y_2[2000+0], double A[2000+0][2000+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         x1[i] = x1[i]+A[i][j]*y_1[j];
   for(i = 0; i <= n-1; i += 1)
      for(j = 0; j <= n-1; j += 1)
         x2[i] = x2[i]+A[j][i]*y_2[j];
#pragma endscop

}
