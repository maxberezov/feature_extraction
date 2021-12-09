static void kernel_bicg(int m, int n, double A[2100+0][1900+0], double s[1900+0], double q[2100+0], double p[1900+0], double r[2100+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= m-1; i += 1)
      s[i] = 0;
   for(i = 0; i <= n-1; i += 1) {
      q[i] = 0.0;
      for(j = 0; j <= m-1; j += 1) {
         s[j] = s[j]+r[i]*A[i][j];
         q[i] = q[i]+A[i][j]*p[j];
      }
   }
#pragma endscop

}
