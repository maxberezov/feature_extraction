# 5307 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s1119(struct args_t *func_args)
{

//    linear dependence testing
//    no dependence - vectorizable

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 1; i <= 255; i += 1) {
int j;
loop_s1119: for(j = 0; j <= 255; j += 1)
aa[i][j] = aa[i-1][j]+bb[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
