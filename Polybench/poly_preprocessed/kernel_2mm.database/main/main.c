# 123 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/2mm/2mm.c"
int main(int argc, char** argv)
{
/* Retrieve problem size. */
int ni = 800;
int nj = 900;
int nk = 1100;
int nl = 1200;

/* Variable declaration/allocation. */
double alpha;
double beta;
double (*tmp)[800 + 0][900 + 0]; tmp = (double(*)[800 + 0][900 + 0])polybench_alloc_data ((800 + 0) * (900 + 0), sizeof(double));;
double (*A)[800 + 0][1100 + 0]; A = (double(*)[800 + 0][1100 + 0])polybench_alloc_data ((800 + 0) * (1100 + 0), sizeof(double));;
double (*B)[1100 + 0][900 + 0]; B = (double(*)[1100 + 0][900 + 0])polybench_alloc_data ((1100 + 0) * (900 + 0), sizeof(double));;
double (*C)[900 + 0][1200 + 0]; C = (double(*)[900 + 0][1200 + 0])polybench_alloc_data ((900 + 0) * (1200 + 0), sizeof(double));;
double (*D)[800 + 0][1200 + 0]; D = (double(*)[800 + 0][1200 + 0])polybench_alloc_data ((800 + 0) * (1200 + 0), sizeof(double));;

/* Initialize array(s). */
init_array (ni, nj, nk, nl, &alpha, &beta,
*A,
*B,
*C,
*D);

/* Start timer. */
polybench_timer_start();;

/* Run kernel. */
kernel_2mm (ni, nj, nk, nl,
alpha, beta,
*tmp,
*A,
*B,
*C,
*D);

/* Stop and print timer. */
polybench_timer_stop();;
polybench_timer_print();;

/* Prevent dead-code elimination. All live-out data must be printed
by the function call in argument. */
if (argc > 42 && ! strcmp(argv[0], "")) print_array(ni, nl, *D);

/* Be clean. */
free((void*)tmp);;
free((void*)A);;
free((void*)B);;
free((void*)C);;
free((void*)D);;

return 0;
}
