# 6673 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s255(struct args_t *func_args)
{

//    scalar and array expansion
//    carry around variables, 2 levels

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x, y;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
x = b[32000-1];
y = b[32000-2];
{
int i;
loop_s255: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+x+y)*(real_t) .333;
y = x;
x = b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
