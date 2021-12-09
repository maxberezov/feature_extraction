# 6560 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s3251(struct args_t *func_args)
{

//    scalar and array expansion
//    scalar expansion

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s3251: for(i = 0; i <= 31998; i += 1) {
a[i+1] = b[i]+c[i];
b[i] = c[i]*e[i];
d[i] = a[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
