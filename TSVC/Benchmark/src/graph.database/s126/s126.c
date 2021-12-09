# 5497 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s126(struct args_t *func_args)
{

//    induction variable recognition
//    induction variable in two loops; recurrence in inner loop

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int k;
{
int nl;
for(nl = 0; nl <= 3899; nl += 1) {
k = 1;
{
int i;
for(i = 0; i <= 255; i += 1) {
{
int j;
loop_s126: for(j = 1; j <= 255; j += 1) {
bb[j][i] = bb[j-1][i]+flat_2d_array[k-1]*cc[j][i];
++k;
}
}
++k;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
