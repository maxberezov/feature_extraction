# 160 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/medley/deriche/deriche.c"
int main(int argc, char** argv)
{
  /* Retrieve problem size. */
  int w = 4096;
  int h = 2160;

  /* Variable declaration/allocation. */
  float alpha;
  float (*imgIn)[4096 + 0][2160 + 0]; imgIn = (float(*)[4096 + 0][2160 + 0])polybench_alloc_data ((4096 + 0) * (2160 + 0), sizeof(float));;
  float (*imgOut)[4096 + 0][2160 + 0]; imgOut = (float(*)[4096 + 0][2160 + 0])polybench_alloc_data ((4096 + 0) * (2160 + 0), sizeof(float));;
  float (*y1)[4096 + 0][2160 + 0]; y1 = (float(*)[4096 + 0][2160 + 0])polybench_alloc_data ((4096 + 0) * (2160 + 0), sizeof(float));;
  float (*y2)[4096 + 0][2160 + 0]; y2 = (float(*)[4096 + 0][2160 + 0])polybench_alloc_data ((4096 + 0) * (2160 + 0), sizeof(float));;


  /* Initialize array(s). */
  init_array (w, h, &alpha, *imgIn, *imgOut);

  /* Start timer. */
  polybench_timer_start();;

  /* Run kernel. */
  kernel_deriche (w, h, alpha, *imgIn, *imgOut, *y1, *y2);

  /* Stop and print timer. */
  polybench_timer_stop();;
  polybench_timer_print();;

  /* Prevent dead-code elimination. All live-out data must be printed
     by the function call in argument. */
  if (argc > 42 && ! strcmp(argv[0], "")) print_array(w, h, *imgOut);

  /* Be clean. */
  free((void*)imgIn);;
  free((void*)imgOut);;
  free((void*)y1);;
  free((void*)y2);;

  return 0;
}
