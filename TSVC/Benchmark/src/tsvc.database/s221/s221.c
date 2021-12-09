# 6061 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s221(struct args_t *func_args)
{

//    loop distribution
//    loop that is partially recursive

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s221: for(i = 1; i <= 31999; i += 1) {
a[i] += c[i]*d[i];
b[i] = b[i-1]+a[i]+d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
