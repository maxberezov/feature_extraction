# 1806 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587748998345859()
{



int C[1000][1000];
int B[1000][1000][1000];
int A[1000][1000];

int b;

for(b = 4; b <= 31; b += 1) {
int a;
kern_1587748998345859: for(a = 5; a <= 31; a += 1) {
A[a][b] = A[a+4][b+2]*36;

C[a][b] = C[a+2][b+1]+35;

B[a][b][a] = 41;
B[a][b][a] = 27;

A[a][b] = 30;

int var_a = A[a][b]*24;
int var_b = A[a-2][b-3]-49;
}
}






return 0;
}
