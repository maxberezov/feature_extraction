# 364 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_baseline/utilities/polybench.c"
void polybench_timer_start()
{
  polybench_prepare_instruments ();

  polybench_t_start = rtclock ();



}
