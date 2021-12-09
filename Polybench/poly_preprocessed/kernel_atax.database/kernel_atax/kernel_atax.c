# 64 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/atax/atax.c"
void kernel_atax(int m, int n,
double A[ 1900 + 0][2100 + 0],
double x[ 2100 + 0],
double y[ 2100 + 0],
double tmp[ 1900 + 0])
{
int i, j;

#pragma scop
polybench_timer_start();;

loop_1:
for (i = 0; i < n; i++){
y[i] = 0;}
polybench_timer_stop();;

polybench_timer_print();;

polybench_timer_start();;

for (i = 0; i < m; i++)
{
tmp[i] = 0.0;
for (j = 0; j < n; j++){
tmp[i] = tmp[i] + A[i][j] * x[j];}
loop_2:
for (j = 0; j < n; j++){
y[j] = y[j] + A[i][j] * tmp[i];}
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
