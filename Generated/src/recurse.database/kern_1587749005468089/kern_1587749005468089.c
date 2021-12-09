# 276 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749005468089()
{



int D[1000];
int B[1000][1000];
int C[1000][1000][1000];
int A[1000][1000][1000];

int c;

for(c = 0; c <= 13; c += 1) {
int b;
for(b = 1; b <= 15; b += 1) {
int a;
kern_1587749005468089: for(a = 0; a <= 15; a += 1) {
C[a][b][c] = C[a][b-1][c]+50;

B[a][b] = B[a+3][b+3]-C[a][b][c]*A[a][b][c];

D[a] = B[a][b]+C[a][b][c];
D[a] = B[a][b];

A[a][b][c] = 2;
A[a+5][b+4][c+2] = 13;

B[a][b] = D[a]-D[a];

C[a][b][c] = B[a][b]*D[a]-C[a][b][c];
B[a][b] = B[a][b-1]+C[a][b][c];
}
}
}







return 0;
}
