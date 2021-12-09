int main(int argc, char **argv)
{
   /* Retrieve problem size. */
   int n = 2800;
   
   /* Variable declaration/allocation. */
   int (*path)[2800+0][2800+0];
   path = (int (*)[2800+0][2800+0]) polybench_alloc_data((2800+0)*(2800+0), sizeof(int));
   
   
   /* Initialize array(s). */
   init_array(n, *path);
   
   /* Start timer. */
   polybench_timer_start();
   
   /* Run kernel. */
   kernel_floyd_warshall(n, *path);
   
   /* Stop and print timer. */
   polybench_timer_stop();
   polybench_timer_print();
   
   /* Prevent dead-code elimination. All live-out data must be printed
      by the function call in argument. */
   if (argc>42&&!strcmp(argv[0], ""))
      print_array(n, *path);
   
   /* Be clean. */
   free((void *) path);

   return 0;
}
