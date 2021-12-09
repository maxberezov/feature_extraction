# 7280 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s291(struct args_t *func_args)
{

//    loop peeling
//    wrap around variable, 1 level

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int im1;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
im1 = 32000-1;
{
int i;
loop_s291: for(i = 0; i <= 31999; i += 1) {
a[i] = (b[i]+b[im1])*(real_t) .5;
im1 = i;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
