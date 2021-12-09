# 1030 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749007059508()
{



int B[1000][1000];
int C[1000];
int A[1000][1000];

int d;

for(d = 3; d <= 255; d += 1) {
int c;
for(c = 2; c <= 255; c += 1) {
int b;
for(b = 2; b <= 255; b += 1) {
int a;
kern_1587749007059508: for(a = 2; a <= 255; a += 1) {
B[a][b] = B[a-1][b-3]+10;

C[a] = C[a-1]-27;

A[a][b] = A[a-2][b-1]+28;

C[a] = C[a+1]+B[a][b];
}
}
}
}






return 0;
}
