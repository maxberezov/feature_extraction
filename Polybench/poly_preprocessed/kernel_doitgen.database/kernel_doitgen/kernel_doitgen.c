# 65 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/kernels/doitgen/doitgen.c"
void kernel_doitgen(int nr, int nq, int np,
double A[ 150 + 0][140 + 0][160 + 0],
double C4[ 160 + 0][160 + 0],
double sum[ 160 + 0])
{
int r, q, p, s;

#pragma scop
polybench_timer_start();;

for (r = 0; r < nr; r++){
for (q = 0; q < nq; q++) {
for (p = 0; p < np; p++) {
sum[p] = 0.0;
for (s = 0; s < np; s++){
sum[p] += A[r][q][s] * C4[s][p];}
}
loop_1:
for (p = 0; p < np; p++){
A[r][q][p] = sum[p];}
}
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
