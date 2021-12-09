# 5334 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s121(struct args_t *func_args)
{

//    induction variable recognition
//    loop with possible ambiguity because of scalar store

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
{
int nl;
for(nl = 0; nl <= 299999; nl += 1) {
{
int i;
loop_s121: for(i = 0; i <= 31998; i += 1) {
j = i+1;
a[i] = a[j]+b[i];
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
