# 6732 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s257(struct args_t *func_args)
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
for(i = 1; i <= 255; i += 1) {
int j;
loop_s257: for(j = 0; j <= 255; j += 1) {
a[i] = aa[j][i]-a[i-1];
aa[j][i] = a[i]+bb[j][i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
