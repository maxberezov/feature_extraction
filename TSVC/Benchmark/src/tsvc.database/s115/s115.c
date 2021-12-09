# 5171 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s115(struct args_t *func_args)
{

//    linear dependence testing
//    triangular saxpy loop

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 389999; nl += 1) {
{
int j;
for(j = 0; j <= 255; j += 1) {
int i;
loop_s115: for(i = j+1; i <= 255; i += 1)
a[i] -= aa[j][i]*a[j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
