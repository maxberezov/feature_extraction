static void kernel_seidel_2d(int tsteps, int n, double A[2000+0][2000+0])
{
   int t, i, j;

#pragma scop
   for(t = 0; t <= tsteps-1; t += 1)
      for(i = 1; i <= n-2; i += 1)
         for(j = 1; j <= n-2; j += 1)
            A[i][j] = (A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1])/9.0;
#pragma endscop

}
