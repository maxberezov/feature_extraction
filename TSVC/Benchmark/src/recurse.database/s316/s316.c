# 7626 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s316(struct args_t *func_args)
{

//    reductions
//    if to min reduction

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t x;
{
int nl;
for(nl = 0; nl <= 499999; nl += 1) {
x = a[0];
{
int i;
loop_s316: for(i = 1; i <= 31999; i += 1)
if (a[i]<x)
x = a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, x);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return x;
}
