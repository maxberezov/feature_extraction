# 7954 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s323(struct args_t *func_args)
{

//    recurrences
//    coupled recurrence

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 49999; nl += 1) {
{
int i;
loop_s323: for(i = 1; i <= 31999; i += 1) {
a[i] = b[i-1]+c[i]*d[i];
b[i] = a[i]+c[i]*e[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
