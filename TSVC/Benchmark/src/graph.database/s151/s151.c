# 5682 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_no_main.c"
real_t s151(struct args_t *func_args)
{

//    interprocedural data flow analysis
//    passing parameter information into a subroutine

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

loop_s151: for(nl = 0; nl <= 499999; nl += 1) {
s151s(a, b, 1);
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
