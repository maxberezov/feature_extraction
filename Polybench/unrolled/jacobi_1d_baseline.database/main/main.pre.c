int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 2000;
   int tsteps = 500;
   
   /* Variable declaration/allocation. */
   double (*A)[2000+0];
   A = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   double (*B)[2000+0];
   B = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   
   
   /* Initialize array(s). */
   init_array(n, *A, *B);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_jacobi_1d(tsteps, n, *A, *B);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
        by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *A);
   
   /* Be clean. */
   free((void *) A);
   free((void *) B);

   return 0;
}
