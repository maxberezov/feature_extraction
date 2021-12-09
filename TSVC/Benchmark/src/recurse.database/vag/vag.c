# 8957 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t vag(struct args_t *func_args)
{

//    control loops
//    vector assignment, gather
//    gather is required

int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 199999; nl += 1) {
{
int i;
loop_vag: for(i = 0; i <= 31999; i += 1)
a[i] = b[ip[i]];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
