# 116 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/linear-algebra/kernels/3mm/3mm.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int ni = 800;
  int nj = 900;
  int nk = 1000;
  int nl = 1100;
  int nm = 1200;

  /* Variable declaration/allocation. */
  double (*E)[800 + 0][900 + 0]; E = (double(*)[800 + 0][900 + 0])polybench_alloc_data ((800 + 0) * (900 + 0), sizeof(double));;
  double (*A)[800 + 0][1000 + 0]; A = (double(*)[800 + 0][1000 + 0])polybench_alloc_data ((800 + 0) * (1000 + 0), sizeof(double));;
  double (*B)[1000 + 0][900 + 0]; B = (double(*)[1000 + 0][900 + 0])polybench_alloc_data ((1000 + 0) * (900 + 0), sizeof(double));;
  double (*F)[900 + 0][1100 + 0]; F = (double(*)[900 + 0][1100 + 0])polybench_alloc_data ((900 + 0) * (1100 + 0), sizeof(double));;
  double (*C)[900 + 0][1200 + 0]; C = (double(*)[900 + 0][1200 + 0])polybench_alloc_data ((900 + 0) * (1200 + 0), sizeof(double));;
  double (*D)[1200 + 0][1100 + 0]; D = (double(*)[1200 + 0][1100 + 0])polybench_alloc_data ((1200 + 0) * (1100 + 0), sizeof(double));;
  double (*G)[800 + 0][1100 + 0]; G = (double(*)[800 + 0][1100 + 0])polybench_alloc_data ((800 + 0) * (1100 + 0), sizeof(double));;

  /* Initialize array(s). */
  init_array (ni, nj, nk, nl, nm,
       *A,
       *B,
       *C,
       *D);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_3mm (ni, nj, nk, nl, nm,
       *E,
       *A,
       *B,
       *F,
       *C,
       *D,
       *G);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(ni, nl, *G);

  /* Be clean. */
  free((void*)E);;
  free((void*)A);;
  free((void*)B);;
  free((void*)F);;
  free((void*)C);;
  free((void*)D);;
  free((void*)G);;

  return 0;
}
