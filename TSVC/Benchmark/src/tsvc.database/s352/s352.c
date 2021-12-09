# 8200 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s352(struct args_t *func_args)
{

//    loop rerolling
//    unrolled dot product

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t dot;
{
int nl;
for(nl = 0; nl <= 799999; nl += 1) {
dot = (real_t) 0.;
{
int i;
loop_s352: for(i = 0; i <= 31999; i += 5)
dot = dot+a[i]*b[i]+a[i+1]*b[i+1]+a[i+2]*b[i+2]+a[i+3]*b[i+3]+a[i+4]*b[i+4];
}
dummy(a, b, c, d, e, aa, bb, cc, dot);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return dot;
}
