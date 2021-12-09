# 4974 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s000(struct args_t *func_args)
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

loop_s000: for(i = 0; i <= 31999; i += 1)
a[i] = b[i]+1;
}
dummy((real_t *) a, (real_t *) b, (real_t *) c, (real_t *) d, (real_t *) e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
