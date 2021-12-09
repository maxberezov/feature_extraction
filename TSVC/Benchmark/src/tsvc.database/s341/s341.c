# 8047 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s341(struct args_t *func_args)
{

//    packing
//    pack positive values
//    not vectorizable, value of j in unknown at each iteration

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s341: for(i = 0; i <= 31999; i += 1)
if (b[i]>(real_t) 0.) {
j++;
a[j] = b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
