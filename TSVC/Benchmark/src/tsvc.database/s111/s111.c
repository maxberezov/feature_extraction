# 4999 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s111(struct args_t *func_args)
{

//    linear dependence testing
//    no dependence - vectorizable

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_s111: for(i = 1; i <= 31999; i += 2)
a[i] = a[i-1]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
