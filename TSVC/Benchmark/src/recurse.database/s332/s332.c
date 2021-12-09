# 8009 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s332(struct args_t *func_args)
{

//    search loops
//    first value greater than threshold

int t = *((int *) func_args->arg_info);

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);

int index;
real_t value;
real_t chksum;
{
int nl;
loop_s332: for(nl = 0; nl <= 99999; nl += 1) {
index = -2;
value = -1.;
int i;
i = 0;
l99998: ;
if (!(i<32000)) goto L20;
if (a[i]>t) goto l99999;
i++;
goto l99998;
l99999: ;
index = i;
value = a[i];
L20: ;
chksum = value+(real_t) index;
dummy(a, b, c, d, e, aa, bb, cc, chksum);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return value;
}
