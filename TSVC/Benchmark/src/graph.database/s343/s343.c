# 8107 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s343(struct args_t *func_args)
{

//    packing
//    pack 2-d array into one dimension
//    not vectorizable, value of k in unknown at each iteration

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 3899; nl += 1) {
k = -1;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s343: for(j = 0; j <= 255; j += 1)
if (bb[j][i]>(real_t) 0.) {
k++;
flat_2d_array[k] = aa[j][i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
