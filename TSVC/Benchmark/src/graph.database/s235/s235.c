# 6285 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s235(struct args_t *func_args)
{

//    loop interchanging
//    imperfectly nested loops

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 77999; nl += 1) {
{
int i;
for(i = 0; i <= 255; i += 1) {
a[i] += b[i]*c[i];
{
int j;
loop_s235: for(j = 1; j <= 255; j += 1)
aa[j][i] = aa[j-1][i]+bb[j][i]*a[i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
