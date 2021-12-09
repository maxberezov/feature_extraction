# 8661 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s482(struct args_t *func_args)
{

//    non-local goto's
//    other loop exit with code before exit

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s482: for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
i = 0;
l99999: ;
if (!(i<32000)) goto _break_2;
a[i] += b[i]*c[i];
if (c[i]>b[i]) goto _break_2;
i++;
goto l99999;
_break_2: ;
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
