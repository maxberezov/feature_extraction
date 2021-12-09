int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int ni = 1000;
   int nj = 1100;
   int nk = 1200;
   
   /* Variable declaration/allocation. */
   double alpha;
   double beta;
   double (*C)[1000+0][1100+0];
   C = (double (*)[1000+0][1100+0]) polybench_alloc_data((1000+0)*(1100+0), sizeof(double));
   double (*A)[1000+0][1200+0];
   A = (double (*)[1000+0][1200+0]) polybench_alloc_data((1000+0)*(1200+0), sizeof(double));
   double (*B)[1200+0][1100+0];
   B = (double (*)[1200+0][1100+0]) polybench_alloc_data((1200+0)*(1100+0), sizeof(double));
   
   /* Initialize array(s). */
   init_array(ni, nj, nk, &alpha, &beta, *C, *A, *B);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_gemm(ni, nj, nk, alpha, beta, *C, *A, *B);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
      by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(ni, nj, *C);
   
   /* Be clean. */
   free((void *) C);
   free((void *) A);
   free((void *) B);

   return 0;
}
