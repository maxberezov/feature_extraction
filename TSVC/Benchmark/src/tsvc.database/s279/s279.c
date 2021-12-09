# 7075 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s279(struct args_t *func_args)
{

//    control flow
//    vector if/gotos

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s279: for(i = 0; i <= 31999; i += 1) {
if (a[i]>(real_t) 0.) goto L20;
b[i] = -b[i]+d[i]*d[i];
if (b[i]<=a[i]) goto L30;
c[i] += d[i]*e[i];
goto L30;
L20: c[i] = -c[i]+e[i]*e[i];
L30: ;
a[i] = b[i]+c[i]*d[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
