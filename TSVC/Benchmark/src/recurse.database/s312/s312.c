# 7509 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s312(struct args_t *func_args)
{

//    reductions
//    product reduction

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t prod;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
prod = (real_t) 1.;
{
int i;
loop_s312: for(i = 0; i <= 31999; i += 1)
prod *= a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, prod);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return prod;
}
