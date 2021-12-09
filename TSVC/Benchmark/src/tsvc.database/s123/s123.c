# 5400 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s123(struct args_t *func_args)
{

//    induction variable recognition
//    induction variable under an if
//    not vectorizable, the condition cannot be speculated

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s123: for(i = 0; i <= 15999; i += 1) {
j++;
a[j] = b[i]+d[i]*e[i];
if (c[i]>(real_t) 0.) {
j++;
a[j] = c[i]+d[i]*e[i];
}
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
