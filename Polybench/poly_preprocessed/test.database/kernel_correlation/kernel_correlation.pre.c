void kernel_correlation(int m, int n, double float_n, double data[1400+0][1200+0], double corr[1200+0][1200+0], double mean[1200+0], double stddev[1200+0])
{
   int i, j, k;

   double eps = 0.1;
   
   
#pragma scop
   polybench_timer_start();

   for(j = 0; j <= m-1; j += 1) {
      mean[j] = 0.0;
loop_1:
      for(i = 0; i <= n-1; i += 1)
         mean[j] += data[i][j];
      mean[j] /= float_n;
   }
   
   
   polybench_timer_stop();

   polybench_timer_print();

   polybench_timer_start();

   for(j = 0; j <= m-1; j += 1) {
      stddev[j] = 0.0;
loop_2:
      for(i = 0; i <= n-1; i += 1)
         stddev[j] += (data[i][j]-mean[j])*(data[i][j]-mean[j]);
      stddev[j] /= float_n;
      stddev[j] = sqrt(stddev[j]);
      /* The following in an inelegant but usual way to handle
         near-zero std. dev. values, which below would cause a zero-
         divide. */
      stddev[j] = stddev[j]<=eps?1.0:stddev[j];
   }
   
   /* Center and reduce the column vectors. */
   polybench_timer_stop();

   polybench_timer_print();

   polybench_timer_start();

   for(i = 0; i <= n-1; i += 1)
loop_3:
      for(j = 0; j <= m-1; j += 1) {
         data[i][j] -= mean[j];
         data[i][j] /= sqrt(float_n)*stddev[j];
      }
   
   /* Calculate the m * m correlation matrix. */
   polybench_timer_stop();

   polybench_timer_print();

   polybench_timer_start();

   for(i = 0; i <= m-1-1; i += 1) {
      corr[i][i] = 1.0;
      for(j = i+1; j <= m-1; j += 1) {
         corr[i][j] = 0.0;
loop_4:
         for(k = 0; k <= n-1; k += 1)
            corr[i][j] += data[k][i]*data[k][j];
         corr[j][i] = corr[i][j];
      }
   }
   polybench_timer_stop();

   polybench_timer_print();

   corr[m-1][m-1] = 1.0;
#pragma endscop

}
