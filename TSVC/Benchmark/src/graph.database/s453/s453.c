# 8573 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s453(struct args_t *func_args)
{

//    induction varibale recognition

real_t s;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
s = 0.;
{
int i;
loop_s453: for(i = 0; i <= 31999; i += 1) {
s += (real_t) 2.;
a[i] = s*b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
