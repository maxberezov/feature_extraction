# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/trisolv/trisolv.c"
void kernel_trisolv(int n,
double L[ 2000 + 0][2000 + 0],
double x[ 2000 + 0],
double b[ 2000 + 0])
{
int i, j;

#pragma scop
polybench_timer_start();;

for (i = 0; i < n; i++)
{
x[i] = b[i];
loop_1:
for (j = 0; j <i; j++){
x[i] -= L[i][j] * x[j];}
x[i] = x[i] / L[i][i];
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
