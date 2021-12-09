# 93 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/ludcmp/ludcmp.c"
void kernel_ludcmp(int n,
double A[ 2000 + 0][2000 + 0],
double b[ 2000 + 0],
double x[ 2000 + 0],
double y[ 2000 + 0])
{
int i, j, k;

double w;

#pragma scop
polybench_timer_start();;

for (i = 0; i < n; i++) {
for (j = 0; j <i; j++) {
w = A[i][j];
for (k = 0; k < j; k++) {
w -= A[i][k] * A[k][j];
}
A[i][j] = w / A[j][j];
}
for (j = i; j < n; j++) {
w = A[i][j];
loop_1:
for (k = 0; k < i; k++) {
w -= A[i][k] * A[k][j];
}
A[i][j] = w;
}
}

polybench_timer_stop();;

polybench_timer_print();;

polybench_timer_start();;

for (i = 0; i < n; i++) {
w = b[i];
loop_2:
for (j = 0; j < i; j++)
w -= A[i][j] * y[j];
y[i] = w;
}

polybench_timer_stop();;

polybench_timer_print();;

polybench_timer_start();;

for (i = n-1; i >=0; i--) {
w = y[i];
loop_3:
for (j = i+1; j < n; j++)
w -= A[i][j] * x[j];
x[i] = w / A[i][i];
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
