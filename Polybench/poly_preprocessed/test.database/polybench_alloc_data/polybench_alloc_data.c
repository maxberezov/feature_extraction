# 557 "/home/maksim/Downloads/poly_prepr/utilities/polybench.c"
void* polybench_alloc_data(unsigned long long int n, int elt_size)
{




  /// FIXME: detect overflow!
  size_t val = n;
  val *= elt_size;
  void* ret = xmalloc (val);

  return ret;
}
