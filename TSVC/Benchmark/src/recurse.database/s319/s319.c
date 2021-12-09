# 7719 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s319(struct args_t *func_args)
{

//    reductions
//    coupled reductions

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
sum = 0.;
{
int i;
loop_s319: for(i = 0; i <= 31999; i += 1) {
a[i] = c[i]+d[i];
sum += a[i];
b[i] = c[i]+e[i];
sum += b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
