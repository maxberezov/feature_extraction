# 2031 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749006214207()
{



int B[1000][1000][1000];
int C[1000][1000][1000];
int A[1000][1000];
int D[1000][1000][1000];
int E[1000];

int b;

for(b = 0; b <= 506; b += 1) {
int a;
kern_1587749006214207: for(a = 0; a <= 507; a += 1) {
A[a][b] = C[a][b][a]*E[a];
A[a+4][b+5] = B[a][b][a]*D[a][b][a]+D[a][b][a];
}
}
# 2059 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
