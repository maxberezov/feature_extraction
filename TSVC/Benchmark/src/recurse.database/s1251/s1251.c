# 6504 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s1251(struct args_t *func_args)
{

//    scalar and array expansion
//    scalar expansion

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s1251: for(i = 0; i <= 31999; i += 1) {
s = b[i]+c[i];
b[i] = a[i]+d[i];
a[i] = s*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
