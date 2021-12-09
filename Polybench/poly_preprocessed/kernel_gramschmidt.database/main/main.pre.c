int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int m = 1000;
   int n = 1200;
   
   /* Variable declaration/allocation. */
   double (*A)[1000+0][1200+0];
   A = (double (*)[1000+0][1200+0]) polybench_alloc_data((1000+0)*(1200+0), sizeof(double));
   double (*R)[1200+0][1200+0];
   R = (double (*)[1200+0][1200+0]) polybench_alloc_data((1200+0)*(1200+0), sizeof(double));
   double (*Q)[1000+0][1200+0];
   Q = (double (*)[1000+0][1200+0]) polybench_alloc_data((1000+0)*(1200+0), sizeof(double));
   
   /* Initialize array(s). */
   init_array(m, n, *A, *R, *Q);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_gramschmidt(m, n, *A, *R, *Q);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(m, n, *A, *R, *Q);
   
   /* Be clean. */
   free((void *) A);
   free((void *) R);
   free((void *) Q);

   return 0;
}
