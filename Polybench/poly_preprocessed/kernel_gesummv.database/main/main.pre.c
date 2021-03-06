int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 1300;
   
   /* Variable declaration/allocation. */
   double alpha;
   double beta;
   double (*A)[1300+0][1300+0];
   A = (double (*)[1300+0][1300+0]) polybench_alloc_data((1300+0)*(1300+0), sizeof(double));
   double (*B)[1300+0][1300+0];
   B = (double (*)[1300+0][1300+0]) polybench_alloc_data((1300+0)*(1300+0), sizeof(double));
   double (*tmp)[1300+0];
   tmp = (double (*)[1300+0]) polybench_alloc_data(1300+0, sizeof(double));
   double (*x)[1300+0];
   x = (double (*)[1300+0]) polybench_alloc_data(1300+0, sizeof(double));
   double (*y)[1300+0];
   y = (double (*)[1300+0]) polybench_alloc_data(1300+0, sizeof(double));
   
   
   /* Initialize array(s). */
   init_array(n, &alpha, &beta, *A, *B, *x);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_gesummv(n, alpha, beta, *A, *B, *tmp, *x, *y);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
      by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *y);
   
   /* Be clean. */
   free((void *) A);
   free((void *) B);
   free((void *) tmp);
   free((void *) x);
   free((void *) y);

   return 0;
}
