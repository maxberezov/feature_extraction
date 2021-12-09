# 6587 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s252(struct args_t *func_args)
{

//    scalar and array expansion
//    loop with ambiguous scalar temporary

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t t, s;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
t = (real_t) 0.;
{
int i;
loop_s252: for(i = 0; i <= 31999; i += 1) {
s = b[i]*c[i];
a[i] = s+t;
t = s;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
