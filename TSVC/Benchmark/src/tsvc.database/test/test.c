# 7470 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t test(real_t *A)
{
real_t s = (real_t) 0.0;
{
int i;
for(i = 0; i <= 3; i += 1)
s += A[i];
}
return s;
}
