int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 120;
   int tsteps = 500;
   
   /* Variable declaration/allocation. */
   double (*A)[120+0][120+0][120+0];
   A = (double (*)[120+0][120+0][120+0]) polybench_alloc_data((120+0)*(120+0)*(120+0), sizeof(double));
   double (*B)[120+0][120+0][120+0];
   B = (double (*)[120+0][120+0][120+0]) polybench_alloc_data((120+0)*(120+0)*(120+0), sizeof(double));
   
   
   /* Initialize array(s). */
   init_array(n, *A, *B);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_heat_3d(tsteps, n, *A, *B);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
      by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *A);
   
   /* Be clean. */
   free((void *) A);

   return 0;
}
