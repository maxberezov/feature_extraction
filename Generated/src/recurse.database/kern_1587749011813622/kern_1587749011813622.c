# 28 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749011813622()
{



int A[1000][1000];
int B[1000][1000];
int C[1000][1000];

int d;

for(d = 3; d <= 124; d += 1) {
int c;
for(c = 5; c <= 250; c += 1) {
int b;
for(b = 5; b <= 250; b += 1) {
int a;
kern_1587749011813622: for(a = 5; a <= 250; a += 1) {
C[a][b] = C[a-5][b-3]*30;

C[a][b] = 0;

B[a][b] = 6;
B[a+5][b+3] = A[a][b];
}
}
}
}






return 0;
}
