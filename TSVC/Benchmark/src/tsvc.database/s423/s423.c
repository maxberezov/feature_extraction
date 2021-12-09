# 8339 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s423(struct args_t *func_args)
{

//    storage classes and equivalencing
//    common and equivalenced variables - with anti-dependence

// do this again here
int vl = 64;
xx = flat_2d_array+vl;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 399999; nl += 1) {
{
int i;
loop_s423: for(i = 0; i <= 31998; i += 1)
flat_2d_array[i+1] = xx[i]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
