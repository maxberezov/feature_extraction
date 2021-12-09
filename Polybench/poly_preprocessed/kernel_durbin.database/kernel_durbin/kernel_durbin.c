# 60 "/home/maksim/PycharmProjects/unrolling/Polybench/poly_preprocessed/linear-algebra/solvers/durbin/durbin.c"
void kernel_durbin(int n,
double r[ 2000 + 0],
double y[ 2000 + 0])
{
double z[2000];
double alpha;
double beta;
double sum;

int i,k;

#pragma scop
y[0] = -r[0];
beta = 1.0;
alpha = -r[0];

polybench_timer_start();;

for (k = 1; k < n; k++) {
beta = (1-alpha*alpha)*beta;
sum = 0.0;
for (i=0; i<k; i++) {
sum += r[k-i-1]*y[i];
}
alpha = - (r[k] + sum)/beta;

for (i=0; i<k; i++) {
z[i] = y[i] + alpha*y[k-i-1];
}
loop_1:
for (i=0; i<k; i++) {
y[i] = z[i];
}
y[k] = alpha;
}
polybench_timer_stop();;

polybench_timer_print();;

#pragma endscop

}
