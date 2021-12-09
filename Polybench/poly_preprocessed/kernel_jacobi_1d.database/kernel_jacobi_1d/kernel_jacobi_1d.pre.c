void kernel_jacobi_1d(int tsteps, int n, double A[2000+0], double B[2000+0])
{
   int t, i;

#pragma scop
   polybench_timer_start();

   for(t = 0; t <= tsteps-1; t += 1) {
      for(i = 1; i <= n-1-1; i += 1)
         B[i] = 0.33333*(A[i-1]+A[i]+A[i+1]);
loop_1:
      for(i = 1; i <= n-1-1; i += 1)
         A[i] = 0.33333*(B[i-1]+B[i]+B[i+1]);
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
