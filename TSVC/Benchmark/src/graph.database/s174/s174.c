# 5900 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s174(struct args_t *func_args)
{

//    symbolics
//    loop with subscript that may seem ambiguous

int M = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s174: for(i = 0; i <= M-1; i += 1)
a[i+M] = a[i]+b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
