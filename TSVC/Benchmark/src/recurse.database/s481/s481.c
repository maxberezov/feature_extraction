# 8634 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s481(struct args_t *func_args)
{

//    non-local goto's
//    stop statement

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s481: for(i = 0; i <= 31999; i += 1) {
if (d[i]<(real_t) 0.)
exit(0);
a[i] += b[i]*c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
