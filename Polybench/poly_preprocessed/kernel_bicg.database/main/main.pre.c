int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 2100;
   int m = 1900;
   
   /* Variable declaration/allocation. */
   double (*A)[2100+0][1900+0];
   A = (double (*)[2100+0][1900+0]) polybench_alloc_data((2100+0)*(1900+0), sizeof(double));
   double (*s)[1900+0];
   s = (double (*)[1900+0]) polybench_alloc_data(1900+0, sizeof(double));
   double (*q)[2100+0];
   q = (double (*)[2100+0]) polybench_alloc_data(2100+0, sizeof(double));
   double (*p)[1900+0];
   p = (double (*)[1900+0]) polybench_alloc_data(1900+0, sizeof(double));
   double (*r)[2100+0];
   r = (double (*)[2100+0]) polybench_alloc_data(2100+0, sizeof(double));
   
   /* Initialize array(s). */
   init_array(m, n, *A, *r, *p);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_bicg(m, n, *A, *s, *q, *p, *r);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(m, n, *s, *q);
   
   /* Be clean. */
   free((void *) A);
   free((void *) s);
   free((void *) q);
   free((void *) p);
   free((void *) r);

   return 0;
}
