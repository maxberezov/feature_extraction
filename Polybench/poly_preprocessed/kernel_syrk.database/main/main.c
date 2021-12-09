# 104 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/blas/syrk/syrk.c"
int main(int argc, char** argv)
{
/* Retrieve problem size. */
        int n = 1200;
        int m = 1000;

/* Variable declaration/allocation. */
        double alpha;
        double beta;
        double (*C)[1200 + 0][1200 + 0]; C = (double(*)[1200 + 0][1200 + 0])polybench_alloc_data ((1200 + 0) * (1200 + 0), sizeof(double));;
        double (*A)[1200 + 0][1000 + 0]; A = (double(*)[1200 + 0][1000 + 0])polybench_alloc_data ((1200 + 0) * (1000 + 0), sizeof(double));;

/* Initialize array(s). */
        init_array (n, m, &alpha, &beta, *C, *A);

/* Start timer. */
        polybench_timer_start();;

/* Run kernel. */
        kernel_syrk (n, m, alpha, beta, *C, *A);

/* Stop and print timer. */
        polybench_timer_stop();;
        polybench_timer_print();;

/* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
        if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *C);

/* Be clean. */
        free((void*)C);;
        free((void*)A);;

        return 0;
}
