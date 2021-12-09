# 30 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/nussinov/nussinov.c"
static
void init_array (int n,
                 base seq[ 2500 + 0],
   int table[ 2500 + 0][2500 + 0])
{
  int i, j;

  //base is AGCT/0..3
  for (i=0; i <n; i++) {
     seq[i] = (base)((i+1)%4);
  }

  for (i=0; i <n; i++)
     for (j=0; j <n; j++)
       table[i][j] = 0;
}
