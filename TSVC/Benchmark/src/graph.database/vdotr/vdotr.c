# 9208 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t vdotr(struct args_t *func_args)
{

//    control loops
//    vector dot product reduction

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t dot;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
dot = 0.;
{
int i;
loop_vdotr: for(i = 0; i <= 31999; i += 1)
dot += a[i]*b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, dot);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return dot;
}
