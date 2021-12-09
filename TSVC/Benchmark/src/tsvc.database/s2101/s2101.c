# 7363 "/home/maksim/PycharmProjects/unrolling/TSVC/Benchmark/src/tsvc_new.c"
real_t s2101(struct args_t *func_args)
{

//    diagonals
//    main diagonal calculation
//    jump in data access

initialise_arrays(__func__);
gettimeofday(&func_args->t1, (void *) 0);
{
int nl;

for(nl = 0; nl <= 999999; nl += 1) {
{
int i;
loop_s2101: for(i = 0; i <= 255; i += 1)
aa[i][i] += bb[i][i]*cc[i][i];
}
dummy(a, b, c, d, e, aa, bb, cc, 0.);
}
}

gettimeofday(&func_args->t2, (void *) 0);
return calc_checksum(__func__);
}
