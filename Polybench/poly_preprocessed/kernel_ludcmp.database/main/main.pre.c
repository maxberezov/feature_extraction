int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 2000;
   
   /* Variable declaration/allocation. */
   double (*A)[2000+0][2000+0];
   A = (double (*)[2000+0][2000+0]) polybench_alloc_data((2000+0)*(2000+0), sizeof(double));
   double (*b)[2000+0];
   b = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   double (*x)[2000+0];
   x = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   double (*y)[2000+0];
   y = (double (*)[2000+0]) polybench_alloc_data(2000+0, sizeof(double));
   
   
   /* Initialize array(s). */
   init_array(n, *A, *b, *x, *y);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_ludcmp(n, *A, *b, *x, *y);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *x);
   
   /* Be clean. */
   free((void *) A);
   free((void *) b);
   free((void *) x);
   free((void *) y);

   return 0;
}
