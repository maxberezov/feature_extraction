# 7824 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s3111(struct args_t *func_args)
{

//    reductions
//    conditional sum reduction

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 49999; nl += 1) {
sum = 0.;
{
int i;
loop_s3111: for(i = 0; i <= 31999; i += 1)
if (a[i]>(real_t) 0.)
sum += a[i];
}
dummy(a, b, c, d, e, aa, bb, cc, sum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
