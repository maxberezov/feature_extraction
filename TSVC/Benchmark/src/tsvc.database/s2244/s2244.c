# 6451 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s2244(struct args_t *func_args)
{

//    node splitting
//    cycle with ture and anti dependency

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s2244: for(i = 0; i <= 31998; i += 1) {
a[i+1] = b[i]+e[i];
a[i] = b[i]+c[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
