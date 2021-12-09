int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 2000;
   
   /* Variable declaration/allocation. */
   double (*L)[2000+0][2000+0];
   L = (double (*)[2000+0][2000+0]) polybench_alloc_data((2000+0)*(2000+0), sizeof(double));
   double (*x)[2000+0];
   x = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   double (*b)[2000+0];
   b = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   
   
   /* Initialize array(s). */
   init_array(n, *L, *x, *b);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_trisolv(n, *L, *x, *b);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
        by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *x);
   
   /* Be clean. */
   free((void *) L);
   free((void *) x);
   free((void *) b);

   return 0;
}
