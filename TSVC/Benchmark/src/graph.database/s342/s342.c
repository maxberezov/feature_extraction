# 8077 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s342(struct args_t *func_args)
{

//    packing
//    unpacking
//    not vectorizable, value of j in unknown at each iteration

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j = 0;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s342: for(i = 0; i <= 31999; i += 1)
if (a[i]>(real_t) 0.) {
j++;
a[i] = b[j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
