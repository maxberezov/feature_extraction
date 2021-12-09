# 5642 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s141(struct args_t *func_args)
{

//    nonlinear dependence testing
//    walk a row in a symmetric packed array
//    element a(i,j) for (int j>i) stored in location j*(j-1)/2+i

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
k = (i+1)*(i+1-1)/2+(i+1)-1;
{
int j;
loop_s141: for(j = i; j <= 255; j += 1) {
flat_2d_array[k] += bb[j][i];
k += j+1;
}
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
