void kernel_nussinov(int n, base seq[2500+0], int table[2500+0][2500+0])
{
   int i, j, k;

#pragma scop
   polybench_timer_start();

   for(i = n-1; i >= 0; i += -1)
      for(j = i+1; j <= n-1; j += 1) {
         if (j-1>=0)
            table[i][j] = table[i][j]>=table[i][j-1]?table[i][j]:table[i][j-1];
         if (i+1<n)
            table[i][j] = table[i][j]>=table[i+1][j]?table[i][j]:table[i+1][j];

         if (j-1>=0&&i+1<n)
            /* don't allow adjacent elements to bond */
            if (i<j-1)
               table[i][j] = table[i][j]>=table[i+1][j-1]+(seq[i]+seq[j]==3?1:0)?table[i][j]:table[i+1][j-1]+(seq[i]+seq[j]==3?1:0);
            else
               table[i][j] = table[i][j]>=table[i+1][j-1]?table[i][j]:table[i+1][j-1];

loop_1:
         for(k = i+1; k <= j-1; k += 1)
            table[i][j] = table[i][j]>=table[i][k]+table[k+1][j]?table[i][j]:table[i][k]+table[k+1][j];
      }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
