# 1904 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749013927294()
{



int A[1000][1000][1000];
int B[1000];

int c;

for(c = 0; c <= 27; c += 1) {
int b;
for(b = 0; b <= 29; b += 1) {
int a;
kern_1587749013927294: for(a = 3; a <= 29; a += 1) {
B[a] = B[a-3]*18;

B[a] = B[a+3]*A[a][b][c];

A[a][b][c] = A[a+2][b+2][c+4]-30;

B[a] = B[a]-A[a][b][c];
A[a][b][c] = B[a-2]-11;
}
}
}





return 0;
}
