# 858 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749001236222()
{



int A[1000][1000];
int B[1000][1000][1000];

int d;

for(d = 0; d <= 13; d += 1) {
int c;
for(c = 5; c <= 26; c += 1) {
int b;
for(b = 2; b <= 28; b += 1) {
int a;
kern_1587749001236222: for(a = 2; a <= 28; a += 1) {
A[a][b] = A[a][b-4]-34;

A[a][b] = A[a-2][b-5]*9;

B[a][b][c] = B[a+3][b+5][c+2]*33;

A[a][b] = A[a+5][b+1]*B[a][b][c];

A[a][b] = B[a][b][c]+A[a][b];
B[a][b][c] = B[a][b+2][c+1]+A[a][b];
}
}
}
}





return 0;
}
