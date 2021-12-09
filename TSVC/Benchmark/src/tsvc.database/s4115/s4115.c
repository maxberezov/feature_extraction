# 8813 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s4115(struct args_t *func_args)
{

//    indirect addressing
//    sparse dot product
//    gather is required

int * restrict ip = func_args->arg_info;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t sum;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
sum = 0.;
{
int i;
loop_s4115: for(i = 0; i <= 31999; i += 1)
sum += a[i]*b[ip[i]];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return sum;
}
