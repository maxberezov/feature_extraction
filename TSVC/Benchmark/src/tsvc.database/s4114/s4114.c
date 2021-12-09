# 8777 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s4114(struct args_t *func_args)
{

//    indirect addressing
//    mix indirect addressing with variable lower and upper bounds
//    gather is required

struct {
int * restrict a;
int b;
} *x = func_args->arg_info;
int * restrict ip = x->a;
int n1 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s4114: for(i = n1-1; i <= 31999; i += 1) {
k = ip[i];
a[i] = b[i]+c[32000-k+1-2]*d[i];
k += 5;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
