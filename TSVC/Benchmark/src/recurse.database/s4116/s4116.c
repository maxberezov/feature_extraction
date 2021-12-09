# 8842 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s4116(struct args_t *func_args)
{

//    indirect addressing
//    more complicated sparse sdot
//    gather is required

struct {
int * restrict a;
int b;
int c;
} *x = func_args->arg_info;
int * restrict ip = x->a;
int j = x->b;
int inc = x->c;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
int off;
{
int nl;
for(nl = 0; nl <= 9999999; nl += 1) {
sum = 0.;
{
int i;
loop_s4116: for(i = 0; i <= 254; i += 1) {
off = inc+i;
sum += a[off]*aa[j-1][ip[i]];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
