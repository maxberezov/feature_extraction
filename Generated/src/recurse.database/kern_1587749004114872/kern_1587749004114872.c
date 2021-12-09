# 1481 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749004114872()
{



int C[1000][1000][1000];
int B[1000];
int D[1000][1000][1000];
int A[1000][1000][1000];
int E[1000][1000];

int b;

for(b = 2; b <= 15; b += 1) {
int a;
kern_1587749004114872: for(a = 1; a <= 31; a += 1)
A[a][b][a] = A[a][b-2][a-1]+13*B[a]-C[a][b][a]+E[a][b];
}
# 1507 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
return 0;
}
