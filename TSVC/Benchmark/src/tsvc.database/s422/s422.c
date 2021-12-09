# 8312 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s422(struct args_t *func_args)
{

//    storage classes and equivalencing
//    common and equivalence statement
//    anti-dependence, threshold of 4

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = flat_2d_array+4;
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
{
int i;
loop_s422: for(i = 0; i <= 31999; i += 1)
xx[i] = flat_2d_array[i+8]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
