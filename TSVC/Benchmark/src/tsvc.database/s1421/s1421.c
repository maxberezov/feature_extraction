# 8286 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s1421(struct args_t *func_args)
{

//    storage classes and equivalencing
//    equivalence- no overlap

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

xx = &b[32000/2];
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
{
int i;
loop_s1421: for(i = 0; i <= 15999; i += 1)
b[i] = xx[i]+a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
