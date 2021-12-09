# 8606 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s471(struct args_t *func_args)
{

//    call statements

int m = 32000;

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s471: for(i = 0; i <= m-1; i += 1) {
x[i] = b[i]+d[i]*d[i];
s471s();
b[i] = c[i]+d[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
