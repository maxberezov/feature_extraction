# 557 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/utilities/polybench.c"
void* polybench_alloc_data(unsigned long long int n, int elt_size)
{




  /// FIXME: detect overflow!
  size_t val = n;
  val *= elt_size;
  void* ret = xmalloc (val);

  return ret;
}
