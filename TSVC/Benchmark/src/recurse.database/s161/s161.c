# 5732 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s161(struct args_t *func_args)
{

//    control flow
//    tests for recognition of loop independent dependences
//    between statements in mutually exclusive regions.

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s161: for(i = 0; i <= 31998; i += 1) {
if (b[i]<(real_t) 0.) goto L20;
a[i] = c[i]+d[i]*e[i];
goto L10;
L20: c[i+1] = a[i]+d[i]*d[i];
L10: ;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
