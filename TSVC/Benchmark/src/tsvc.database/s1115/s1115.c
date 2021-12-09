# 5198 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s1115(struct args_t *func_args)
{

//    linear dependence testing
//    triangular saxpy loop

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s1115: for(j = 0; j <= 255; j += 1)
aa[i][j] = aa[i][j]*cc[j][i]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
