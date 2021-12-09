# 7879 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s3113(struct args_t *func_args)
{

//    reductions
//    maximum of absolute value

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t max;
{
int nl;
for(nl = 0; nl <= 399999; nl += 1) {
max = fabsf(a[0]);
{
int i;
loop_s3113: for(i = 0; i <= 31999; i += 1)
if (fabsf(a[i])>max)
max = fabsf(a[i]);
}
dummy(a, b, c, d, e, aa, bb, cc, max);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max;
}
