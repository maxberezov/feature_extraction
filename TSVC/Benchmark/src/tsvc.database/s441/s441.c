# 8424 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s441(struct args_t *func_args)
{

//    non-logical if's
//    arithmetic if

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s441: for(i = 0; i <= 31999; i += 1)
if (d[i]<(real_t) 0.)
a[i] += b[i]*c[i];
else if (d[i]==(real_t) 0.)
a[i] += b[i]*b[i];
else
a[i] += c[i]*c[i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
