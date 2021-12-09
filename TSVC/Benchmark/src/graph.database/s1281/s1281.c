# 7251 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s1281(struct args_t *func_args)
{

//    crossing thresholds
//    index set splitting
//    reverse data access

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s1281: for(i = 0; i <= 31999; i += 1) {
x = b[i]*c[i]+a[i]*d[i]+e[i];
a[i] = x-((real_t) 1.0);
b[i] = x;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
