void kernel_trisolv(int n, double L[2000+0][2000+0], double x[2000+0], double b[2000+0])
{
   int i, j;

#pragma scop
   polybench_timer_start();

   for(i = 0; i <= n-1; i += 1) {
      x[i] = b[i];
loop_1:
      for(j = 0; j <= i-1; j += 1)
         x[i] -= L[i][j]*x[j];
      x[i] = x[i]/L[i][i];
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
