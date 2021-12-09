# 6190 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s1232(struct args_t *func_args)
{

//    loop interchange
//    interchanging of triangular loops

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 38999; nl += 1) {
{
int j;
for(j = 0; j <= 255; j += 1) {
int i;
loop_s1232: for(i = j; i <= 255; i += 1)
aa[i][j] = bb[i][j]+cc[i][j];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 1.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
