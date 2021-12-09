# 369 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749006722991()
{



int B[1000][1000];
int A[1000][1000];
int C[1000];

int c;

for(c = 0; c <= 127; c += 1) {
int b;
for(b = 5; b <= 511; b += 1) {
int a;
kern_1587749006722991: for(a = 5; a <= 511; a += 1) {
C[a] = B[a][b]-A[a][b];
A[a][b] = B[a-5][b]+C[a]*28;
}
}
}






return 0;
}
