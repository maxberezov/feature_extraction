# 6341 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s242(struct args_t *func_args)
{

//    node splitting

struct {
real_t a;
real_t b;
} *x = func_args->arg_info;
real_t s1 = x->a;
real_t s2 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 19999; nl += 1) {
{
int i;
loop_s242: for(i = 1; i <= 31999; i += 1)
a[i] = a[i-1]+s1+s2+b[i]+c[i]+d[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
