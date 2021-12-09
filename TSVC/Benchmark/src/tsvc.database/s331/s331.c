# 7980 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s331(struct args_t *func_args)
{

//    search loops
//    if to last-1

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int j;
real_t chksum;
{
int nl;
for(nl = 0; nl <= 99999; nl += 1) {
j = -1;
{
int i;
loop_s331: for(i = 0; i <= 31999; i += 1)
if (a[i]<(real_t) 0.)
j = i;
}
chksum = (real_t) j;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return j+1;
}
