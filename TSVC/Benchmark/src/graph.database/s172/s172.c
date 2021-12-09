# 5843 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s172(struct args_t *func_args)
{
//    symbolics
//    vectorizable if n3 .ne. 0

struct {
int a;
int b;
} *x = func_args->arg_info;
int n1 = x->a;
int n3 = x->b;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s172: for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
i = n1-1;
while (i<32000) {
a[i] += b[i];
i += n3;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
