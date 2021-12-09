# 339 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749011116815()
{



int A[1000][1000];
int C[1000][1000][1000];
int B[1000][1000];

int b;

for(b = 3; b <= 15; b += 1) {
int a;
kern_1587749011116815: for(a = 5; a <= 31; a += 1) {
A[a][b] = A[a][b+4]+B[a][b];

C[a][b][a] = A[a][b];
C[a-4][b-2][a-5] = B[a][b];

A[a][b] = 44;
}
}






return 0;
}
