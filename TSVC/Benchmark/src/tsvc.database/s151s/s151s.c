# 5676 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
void s151s(real_t a[32000], real_t b[32000], int m)
{
int i;
for(i = 0; i <= 31998; i += 1)
a[i] = a[i+m]+b[i];
}
