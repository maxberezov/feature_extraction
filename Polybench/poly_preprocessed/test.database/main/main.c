# 155 "/home/maksim/Downloads/poly_prepr/datamining/correlation/correlation.c"
int main(int argc, char** argv)
{
/* Retrieve problem size. */
        int n = 1400;
        int m = 1200;

/* Variable declaration/allocation. */
        double float_n;
        double (*data)[1400 + 0][1200 + 0]; data = (double(*)[1400 + 0][1200 + 0])polybench_alloc_data ((1400 + 0) * (1200 + 0), sizeof(double));;
        double (*corr)[1200 + 0][1200 + 0]; corr = (double(*)[1200 + 0][1200 + 0])polybench_alloc_data ((1200 + 0) * (1200 + 0), sizeof(double));;
        double (*mean)[1200 + 0]; mean = (double(*)[1200 + 0])polybench_alloc_data (1200 + 0, sizeof(double));;
        double (*stddev)[1200 + 0]; stddev = (double(*)[1200 + 0])polybench_alloc_data (1200 + 0, sizeof(double));;

/* Initialize array(s). */
        init_array (m, n, &float_n, *data);

/* Start timer. */
        polybench_timer_start();;

/* Run kernel. */
        kernel_correlation (m, n, float_n,
                            *data,
                            *corr,
                            *mean,
                            *stddev);

/* Stop and print timer. */
        polybench_timer_stop();;
        polybench_timer_print();;

/* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
        if (argc > 42 && ! strcmp(argv[0], "")) print_array(m, *corr);

/* Be clean. */
        free((void*)data);;
        free((void*)corr);;
        free((void*)mean);;
        free((void*)stddev);;

        return 0;
}
