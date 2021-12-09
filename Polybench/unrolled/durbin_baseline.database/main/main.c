# 98 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/solvers/durbin/durbin.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = 2000;

  /* Variable declaration/allocation. */
  double (*r)[2000 + 0]; r = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;
  double (*y)[2000 + 0]; y = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;


  /* Initialize array(s). */
  init_array (n, *r);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_durbin (n,
   *r,
   *y);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *y);

  /* Be clean. */
  free((void*)r);;
  free((void*)y);;

  return 0;
}
