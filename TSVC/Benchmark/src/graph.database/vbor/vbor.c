# 9234 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t vbor(struct args_t *func_args)
{

//    control loops
//    basic operations rates, isolate arithmetic from memory traffic
//    all combinations of three, 59 flops for 6 loads and 1 store.

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

real_t a1, b1, c1, d1, e1, f1;
{
int nl;
for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_vbor: for(i = 0; i <= 255; i += 1) {
a1 = a[i];
b1 = b[i];
c1 = c[i];
d1 = d[i];
e1 = e[i];
f1 = aa[0][i];
a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
d1 = d1*e1*f1;
x[i] = a1*b1*c1*d1;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
