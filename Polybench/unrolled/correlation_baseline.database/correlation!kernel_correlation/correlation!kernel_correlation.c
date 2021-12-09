# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/datamining/correlation/correlation.c"
static
void kernel_correlation(int m, int n,
   double float_n,
   double data[ 1400 + 0][1200 + 0],
   double corr[ 1200 + 0][1200 + 0],
   double mean[ 1200 + 0],
   double stddev[ 1200 + 0])
{
  int i, j, k;

  double eps = 0.1;


#pragma scop
  for (j = 0; j < m; j++)
    {
      mean[j] = 0.0;
      for (i = 0; i < n; i++)
 mean[j] += data[i][j];
      mean[j] /= float_n;
    }


   for (j = 0; j < m; j++)
    {
      stddev[j] = 0.0;
      for (i = 0; i < n; i++)
        stddev[j] += (data[i][j] - mean[j]) * (data[i][j] - mean[j]);
      stddev[j] /= float_n;
      stddev[j] = sqrt(stddev[j]);
      /* The following in an inelegant but usual way to handle
         near-zero std. dev. values, which below would cause a zero-
         divide. */
      stddev[j] = stddev[j] <= eps ? 1.0 : stddev[j];
    }

  /* Center and reduce the column vectors. */
  for (i = 0; i < n; i++){
    for (j = 0; j < m; j++)
      {
        data[i][j] -= mean[j];
        data[i][j] /= sqrt(float_n) * stddev[j];
      }
}

  /* Calculate the m * m correlation matrix. */
  for (i = 0; i < m-1; i++)
    {
      corr[i][i] = 1.0;
      for (j = i+1; j < m; j++)
        {
          corr[i][j] = 0.0;
          for (k = 0; k < n; k++)
            corr[i][j] += (data[k][i] * data[k][j]);
          corr[j][i] = corr[i][j];
        }
    }
  corr[m-1][m-1] = 1.0;
#pragma endscop

}
