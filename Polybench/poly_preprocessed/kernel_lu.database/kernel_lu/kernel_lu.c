# 83 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/lu/lu.c"
void kernel_lu(int n,
double A[ 2000 + 0][2000 + 0])
{
int i, j, k;

#pragma scop
polybench_timer_start();;

for (i = 0; i < n; i++) {
for (j = 0; j <i; j++) {
for (k = 0; k < j; k++) {
A[i][j] -= A[i][k] * A[k][j];
}
A[i][j] /= A[j][j];
}
for (j = i; j < n; j++) {
loop_1:
for (k = 0; k < i; k++) {
A[i][j] -= A[i][k] * A[k][j];
}
}
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop
}
