# 5817 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s171(struct args_t *func_args)
{

//    symbolics
//    symbolic dependence tests

int inc = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s171: for(i = 0; i <= 31999; i += 1)
a[i*inc] += b[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
