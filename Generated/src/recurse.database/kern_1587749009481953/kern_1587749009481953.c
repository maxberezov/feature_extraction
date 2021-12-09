# 1638 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749009481953()
{



int C[1000][1000][1000];
int B[1000];
int A[1000][1000][1000];

int d;

for(d = 4; d <= 61; d += 1) {
int c;
for(c = 2; c <= 15; c += 1) {
int b;
for(b = 5; b <= 12; b += 1) {
int a;
kern_1587749009481953: for(a = 5; a <= 12; a += 1) {
B[a] = B[a-5]+A[a][b][c];

B[a] = B[a-4]-50*A[a][b][c];

C[a][b][c] = C[a][b+5][c]*15;

C[a][b][c] = B[a];

A[a][b][c] = A[a][b][c]-24;
B[a] = A[a-3][b-2][c]-C[a][b][c];

int var_a = C[a][b][c]-8;
int var_b = C[a-5][b-1][c-4]+4;
}
}
}
}






return 0;
}
