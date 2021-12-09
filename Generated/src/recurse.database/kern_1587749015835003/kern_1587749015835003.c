# 989 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749015835003()
{



int B[1000][1000];
int E[1000];
int D[1000][1000];
int C[1000][1000][1000];
int A[1000];

int c;

for(c = 0; c <= 13; c += 1) {
int b;
for(b = 3; b <= 61; b += 1) {
int a;
kern_1587749015835003: for(a = 3; a <= 10; a += 1) {
E[a] = E[a-3]*C[a][b][c]-B[a][b]+D[a][b];

B[a][b] = B[a-1][b-3]+42;

C[a][b][c] = C[a+5][b+2][c+2]*28;

E[a] = A[a]+B[a][b]-27-A[a];

E[a] = E[a]*D[a][b];
C[a][b][c] = E[a+5]+A[a]*B[a][b]-8;
}
}
}
# 1028 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
