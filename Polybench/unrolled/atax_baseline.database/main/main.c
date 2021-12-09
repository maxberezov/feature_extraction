# 89 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/atax/atax.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int m = 1900;
  int n = 2100;

  /* Variable declaration/allocation. */
  double (*A)[1900 + 0][2100 + 0]; A = (double(*)[1900 + 0][2100 + 0])polybench_alloc_data ((1900 + 0) * (2100 + 0), sizeof(double));;
  double (*x)[2100 + 0]; x = (double(*)[2100 + 0])polybench_alloc_data (2100 + 0, sizeof(double));;
  double (*y)[2100 + 0]; y = (double(*)[2100 + 0])polybench_alloc_data (2100 + 0, sizeof(double));;
  double (*tmp)[1900 + 0]; tmp = (double(*)[1900 + 0])polybench_alloc_data (1900 + 0, sizeof(double));;

  /* Initialize array(s). */
  init_array (m, n, *A, *x);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_atax (m, n,
        *A,
        *x,
        *y,
        *tmp);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *y);

  /* Be clean. */
  free((void*)A);;
  free((void*)x);;
  free((void*)y);;
  free((void*)tmp);;

  return 0;
}
