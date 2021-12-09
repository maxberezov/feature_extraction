# 7906 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s321(struct args_t *func_args)
{

//    recurrences
//    first order linear recurrence

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s321: for(i = 1; i <= 31999; i += 1)
a[i] += a[i-1]*b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
