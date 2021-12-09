# 5706 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s152(struct args_t *func_args)
{

//    interprocedural data flow analysis
//    collecting information from a subroutine

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 99999; nl += 1) {
{
int i;
loop_s152: for(i = 0; i <= 31999; i += 1) {
b[i] = d[i]*e[i];
s152s(a, b, c, i);
}
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
