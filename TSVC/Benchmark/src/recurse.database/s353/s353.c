# 8226 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s353(struct args_t *func_args)
{

//    loop rerolling
//    unrolled sparse saxpy
//    gather is required

int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t alpha = c[0];
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s353: for(i = 0; i <= 31999; i += 5) {
a[i] += alpha*b[ip[i]];
a[i+1] += alpha*b[ip[i+1]];
a[i+2] += alpha*b[ip[i+2]];
a[i+3] += alpha*b[ip[i+3]];
a[i+4] += alpha*b[ip[i+4]];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
