int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int m = 1000;
   int n = 1200;
   
   /* Variable declaration/allocation. */
   double alpha;
   double (*A)[1000+0][1000+0];
   A = (double (*)[1000+0][1000+0]) polybench_alloc_data((1000+0)*(1000+0), sizeof(double));
   double (*B)[1000+0][1200+0];
   B = (double (*)[1000+0][1200+0]) polybench_alloc_data((1000+0)*(1200+0), sizeof(double));
   
   /* Initialize array(s). */
   init_array(m, n, &alpha, *A, *B);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_trmm(m, n, alpha, *A, *B);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
      by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(m, n, *B);
   
   /* Be clean. */
   free((void *) A);
   free((void *) B);

   return 0;
}
