# 6761 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s258(struct args_t *func_args)
{

//    scalar and array expansion
//    wrap-around scalar under an if

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t s;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
s = 0.;
{
int i;
loop_s258: for(i = 0; i <= 255; i += 1) {
if (a[i]>0.)
s = d[i]*d[i];
b[i] = s*c[i]+d[i];
e[i] = (s+(real_t) 1.)*aa[0][i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
