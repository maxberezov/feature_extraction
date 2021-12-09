# 5792 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s162(struct args_t *func_args)
{
//    control flow
//    deriving assertions

int k = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
if (k>0) {
int i;
loop_s162: for(i = 0; i <= 31998; i += 1)
a[i] = a[i+k]+b[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
