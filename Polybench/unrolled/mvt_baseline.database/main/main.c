# 100 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/mvt/mvt.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = 2000;

  /* Variable declaration/allocation. */
  double (*A)[2000 + 0][2000 + 0]; A = (double(*)[2000 + 0][2000 + 0])polybench_alloc_data ((2000 + 0) * (2000 + 0), sizeof(double));;
  double (*x1)[2000 + 0]; x1 = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;
  double (*x2)[2000 + 0]; x2 = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;
  double (*y_1)[2000 + 0]; y_1 = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;
  double (*y_2)[2000 + 0]; y_2 = (double(*)[2000 + 0])polybench_alloc_data (2000 + 0, sizeof(double));;


  /* Initialize array(s). */
  init_array (n,
       *x1,
       *x2,
       *y_1,
       *y_2,
       *A);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_mvt (n,
       *x1,
       *x2,
       *y_1,
       *y_2,
       *A);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *x1, *x2);

  /* Be clean. */
  free((void*)A);;
  free((void*)x1);;
  free((void*)x2);;
  free((void*)y_1);;
  free((void*)y_2);;

  return 0;
}
