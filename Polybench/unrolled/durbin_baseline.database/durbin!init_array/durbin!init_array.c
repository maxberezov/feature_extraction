# 25 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/durbin/durbin.c"
static
void init_array (int n,
   double r[ 2000 + 0])
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      r[i] = (n+1-i);
    }
}
