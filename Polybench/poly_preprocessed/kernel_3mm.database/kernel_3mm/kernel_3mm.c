# 71 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/3mm/3mm.c"
void kernel_3mm(int ni, int nj, int nk, int nl, int nm,
double E[ 800 + 0][900 + 0],
double A[ 800 + 0][1000 + 0],
double B[ 1000 + 0][900 + 0],
double F[ 900 + 0][1100 + 0],
double C[ 900 + 0][1200 + 0],
double D[ 1200 + 0][1100 + 0],
double G[ 800 + 0][1100 + 0])
{
int i, j, k;

#pragma scop
/* E := A*B */
polybench_timer_start();;

for (i = 0; i < ni; i++){
for (j = 0; j < nj; j++)
{
E[i][j] = 0.0;
loop_1:
for (k = 0; k < nk; ++k)
E[i][j] += A[i][k] * B[k][j];
}
}
/* F := C*D */
polybench_timer_stop();;

polybench_timer_print();;

polybench_timer_start();;

for (i = 0; i < nj; i++){
for (j = 0; j < nl; j++)
{
F[i][j] = 0.0;
loop_2:
for (k = 0; k < nm; ++k)
F[i][j] += C[i][k] * D[k][j];
}
}
/* G := E*F */
polybench_timer_stop();;

polybench_timer_print();;

polybench_timer_start();;

for (i = 0; i < ni; i++){
for (j = 0; j < nl; j++)
{
G[i][j] = 0.0;
loop_3:
for (k = 0; k < nj; ++k)
G[i][j] += E[i][k] * F[k][j];
}
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
