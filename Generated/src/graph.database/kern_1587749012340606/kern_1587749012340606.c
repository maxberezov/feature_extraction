# 1161 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749012340606()
{



int C[1000][1000][1000];
int B[1000][1000][1000];
int A[1000];

int a;

kern_1587749012340606: for(a = 4; a <= 27; a += 1) {
B[a][a][a] = B[a][a][a-4]+39;

A[a] = A[a+4]+B[a][a][a]-C[a][a][a];

C[a][a][a] = C[a+4][a+1][a+4]-30;
}






return 0;
}
