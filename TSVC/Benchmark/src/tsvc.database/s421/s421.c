# 8259 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s421(struct args_t *func_args)
{

//    storage classes and equivalencing
//    equivalence- no overlap

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = flat_2d_array;
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
yy = xx;
{
int i;
loop_s421: for(i = 0; i <= 31998; i += 1)
xx[i] = yy[i+1]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
