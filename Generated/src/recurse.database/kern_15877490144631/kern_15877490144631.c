# 797 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_15877490144631()
{



int C[1000][1000];
int B[1000][1000];
int A[1000][1000];

int d;

for(d = 5; d <= 253; d += 1) {
int c;
for(c = 4; c <= 253; c += 1) {
int b;
for(b = 4; b <= 253; b += 1) {
int a;
kern_15877490144631: for(a = 4; a <= 253; a += 1) {
B[a][b] = B[a-3][b]*42;

C[a][b] = C[a-2][b-3]-18;

C[a][b] = C[a+2][b+2]+B[a][b]*A[a][b];

B[a][b] = 24;

A[a][b] = C[a][b]+9*B[a][b];
B[a][b] = C[a-4][b-3]-A[a][b]*B[a][b];
}
}
}
}






return 0;
}
