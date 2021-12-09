# 5071 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s1112(struct args_t *func_args)
{

//    linear dependence testing
//    loop reversal

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 299999; nl += 1) {
{
int i;
loop_s1112: for(i = 32000-1; i >= 0; i += -1)
a[i] = b[i]+(real_t) 1.;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
