# 78 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/gramschmidt/gramschmidt.c"
void kernel_gramschmidt(int m, int n,
double A[ 1000 + 0][1200 + 0],
double R[ 1200 + 0][1200 + 0],
double Q[ 1000 + 0][1200 + 0])
{
int i, j, k;

double nrm;

#pragma scop
polybench_timer_start();;

for (k = 0; k < n; k++)
{
nrm = 0.0;
for (i = 0; i < m; i++){
nrm += A[i][k] * A[i][k];}
R[k][k] = sqrt(nrm);
for (i = 0; i < m; i++){
Q[i][k] = A[i][k] / R[k][k];}
for (j = k + 1; j < n; j++)
{
R[k][j] = 0.0;
for (i = 0; i < m; i++){
R[k][j] += Q[i][k] * A[i][j];}
loop_1:
for (i = 0; i < m; i++){
A[i][j] = A[i][j] - Q[i][k] * R[k][j];}
}
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
