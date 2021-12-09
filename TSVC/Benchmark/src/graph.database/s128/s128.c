# 5561 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s128(struct args_t *func_args)
{

//    induction variables
//    coupled induction variables
//    jump in data access

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j, k;
{
int nl;
for(nl = 0; nl <= 199999; nl += 1) {
j = -1;
{
int i;
loop_s128: for(i = 0; i <= 15999; i += 1) {
k = j+1;
a[i] = b[k]-d[i];
j = k+1;
b[k] = a[i]+c[k];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
