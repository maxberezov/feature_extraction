# 1067 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749001918364()
{



int B[1000][1000];
int A[1000][1000][1000];

int d;

for(d = 4; d <= 58; d += 1) {
int c;
for(c = 2; c <= 11; c += 1) {
int b;
for(b = 3; b <= 58; b += 1) {
int a;
kern_1587749001918364: for(a = 3; a <= 58; a += 1) {
A[a][b][c] = A[a-3][b-2][c-4]-B[a][b];

A[a][b][c] = 13;

int var_a = A[a][b][c]*6;
int var_b = A[a+5][b+3][c+3]-5;
}
}
}
}





return 0;
}
