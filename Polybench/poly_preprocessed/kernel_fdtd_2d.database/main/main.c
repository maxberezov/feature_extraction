# 133 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/stencils/fdtd-2d/fdtd-2d.c"
int main(int argc, char** argv)
{
/* Retrieve problem size. */
        int tmax = 500;
        int nx = 1000;
        int ny = 1200;

/* Variable declaration/allocation. */
        double (*ex)[1000 + 0][1200 + 0]; ex = (double(*)[1000 + 0][1200 + 0])polybench_alloc_data ((1000 + 0) * (1200 + 0), sizeof(double));;
        double (*ey)[1000 + 0][1200 + 0]; ey = (double(*)[1000 + 0][1200 + 0])polybench_alloc_data ((1000 + 0) * (1200 + 0), sizeof(double));;
        double (*hz)[1000 + 0][1200 + 0]; hz = (double(*)[1000 + 0][1200 + 0])polybench_alloc_data ((1000 + 0) * (1200 + 0), sizeof(double));;
        double (*_fict_)[500 + 0]; _fict_ = (double(*)[500 + 0])polybench_alloc_data (500 + 0, sizeof(double));;

/* Initialize array(s). */
        init_array (tmax, nx, ny,
                    *ex,
                    *ey,
                    *hz,
                    *_fict_);

/* Start timer. */
        polybench_timer_start();;

/* Run kernel. */
        kernel_fdtd_2d (tmax, nx, ny,
                        *ex,
                        *ey,
                        *hz,
                        *_fict_);


/* Stop and print timer. */
        polybench_timer_stop();;
        polybench_timer_print();;

/* Prevent dead-code elimination. All live-out data must be printed
   by the function call in argument. */
        if (argc > 42 && ! strcmp(argv[0], "")) print_array(nx, ny, *ex, *ey, *hz)

                                                               ;

/* Be clean. */
        free((void*)ex);;
        free((void*)ey);;
        free((void*)hz);;
        free((void*)_fict_);;

        return 0;
}
