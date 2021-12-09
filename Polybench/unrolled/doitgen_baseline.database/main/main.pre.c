int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int nr = 150;
   int nq = 140;
   int np = 160;
   
   /* Variable declaration/allocation. */
   double (*A)[150+0][140+0][160+0];
   A = (double (*)[150+0][140+0][160+0]) polybench_alloc_data((150+0)*(140+0)*(160+0), sizeof(double));
   double (*sum)[160+0];
   sum = (double (*)[160+0]) polybench_alloc_data(160+0, sizeof(double));
   double (*C4)[160+0][160+0];
   C4 = (double (*)[160+0][160+0]) polybench_alloc_data((160+0)*(160+0), sizeof(double));
   
   /* Initialize array(s). */
   init_array(nr, nq, np, *A, *C4);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_doitgen(nr, nq, np, *A, *C4, *sum);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
        by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(nr, nq, np, *A);
   
   /* Be clean. */
   free((void *) A);
   free((void *) sum);
   free((void *) C4);

   return 0;
}
