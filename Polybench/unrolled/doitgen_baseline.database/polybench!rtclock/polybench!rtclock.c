# 82 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/utilities/polybench.c"
static
double rtclock()
{

    struct timeval Tp;
    int stat;
    stat = gettimeofday (&Tp, 
# 88 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/utilities/polybench.c" 3 4
                             ((void *)0)
# 88 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/utilities/polybench.c"
                                 );
    if (stat != 0)
      printf ("Error return from gettimeofday: %d", stat);
    return (Tp.tv_sec + Tp.tv_usec * 1.0e-6);



}
