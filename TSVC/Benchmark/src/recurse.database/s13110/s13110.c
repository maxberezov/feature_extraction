# 7787 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s13110(struct args_t *func_args)
{

//    reductions
//    if to max with index reductio 2 dimensions

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int xindex, yindex;
real_t max, chksum;
{
int nl;
for(nl = 0; nl <= 38999; nl += 1) {
max = aa[0][0];
xindex = 0;
yindex = 0;
{
int i;
for(i = 0; i <= 255; i += 1) {
int j;
loop_s13110: for(j = 0; j <= 255; j += 1)
if (aa[i][j]>max) {
max = aa[i][j];
xindex = i;
yindex = j;
}
}
}
chksum = max+(real_t) xindex+(real_t) yindex;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return max+xindex+1+yindex+1;
}
