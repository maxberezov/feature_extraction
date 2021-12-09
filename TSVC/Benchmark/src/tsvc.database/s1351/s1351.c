# 8170 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s1351(struct args_t *func_args)
{

//    induction pointer recognition

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 799999; nl += 1) {
real_t * restrict A = a;
real_t * restrict B = b;
real_t * restrict C = c;
{
int i;
loop_s1351: for(i = 0; i <= 31999; i += 1) {
*A = *B+*C;
A++;
B++;
C++;
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
