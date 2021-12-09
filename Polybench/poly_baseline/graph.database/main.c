# 131 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/stencils/adi/adi.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int n = 1000;
  int tsteps = 500;

  /* Variable declaration/allocation. */
  double (*u)[1000 + 0][1000 + 0]; u = (double(*)[1000 + 0][1000 + 0])polybench_alloc_data ((1000 + 0) * (1000 + 0), sizeof(double));;
  double (*v)[1000 + 0][1000 + 0]; v = (double(*)[1000 + 0][1000 + 0])polybench_alloc_data ((1000 + 0) * (1000 + 0), sizeof(double));;
  double (*p)[1000 + 0][1000 + 0]; p = (double(*)[1000 + 0][1000 + 0])polybench_alloc_data ((1000 + 0) * (1000 + 0), sizeof(double));;
  double (*q)[1000 + 0][1000 + 0]; q = (double(*)[1000 + 0][1000 + 0])polybench_alloc_data ((1000 + 0) * (1000 + 0), sizeof(double));;


  /* Initialize array(s). */
  init_array (n, *u);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_adi (tsteps, n, *u, *v, *p, *q);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *u);

  /* Be clean. */
  free((void*)u);;
  free((void*)v);;
  free((void*)p);;
  free((void*)q);;

  return 0;
}
