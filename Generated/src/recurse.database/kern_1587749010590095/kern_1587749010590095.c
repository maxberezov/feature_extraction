# 1767 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749010590095()
{



int C[1000][1000];
int B[1000];
int A[1000][1000];

int d;

for(d = 5; d <= 255; d += 1) {
int c;
for(c = 5; c <= 255; c += 1) {
int b;
for(b = 5; b <= 255; b += 1) {
int a;
kern_1587749010590095: for(a = 5; a <= 255; a += 1) {
B[a] = B[a-3]+18;

B[a] = B[a+5]*C[a][b]-3;

C[a][b] = B[a];
C[a-4][b-3] = 8;

C[a][b] = C[a][b]*A[a][b];
B[a] = C[a-5][b-5]*B[a]+A[a][b];
}
}
}
}






return 0;
}
