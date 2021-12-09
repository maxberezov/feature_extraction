# 5592 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s131(struct args_t *func_args)
{
//    global data flow analysis
//    forward substitution

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int m = 1;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
{
int i;
loop_s131: for(i = 0; i <= 31998; i += 1)
a[i] = a[i+m]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
