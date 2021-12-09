# 118 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/medley/nussinov/nussinov.c"
int main(int argc, char** argv)
{
/* Retrieve problem size. */
        int n = 2500;

/* Variable declaration/allocation. */
        base (*seq)[2500 + 0]; seq = (base(*)[2500 + 0])polybench_alloc_data (2500 + 0, sizeof(base));;
        int (*table)[2500 + 0][2500 + 0]; table = (int(*)[2500 + 0][2500 + 0])polybench_alloc_data ((2500 + 0) * (2500 + 0), sizeof(int));;

/* Initialize array(s). */
        init_array (n, *seq, *table);

/* Start timer. */
        polybench_timer_start();;

/* Run kernel. */
        kernel_nussinov (n, *seq, *table);

/* Stop and print timer. */
        polybench_timer_stop();;
        polybench_timer_print();;

/* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
        if (argc > 42 && ! strcmp(argv[0], "")) print_array(n, *table);

/* Be clean. */
        free((void*)seq);;
        free((void*)table);;

        return 0;
}
