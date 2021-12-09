# 6703 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s256(struct args_t *func_args)
{

//    scalar and array expansion
//    array expansion

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 3899; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s256: for(j = 1; j <= 255; j += 1) {
a[j] = (real_t) 1.0-a[j-1];
aa[j][i] = a[j]+bb[j][i]*d[j];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
