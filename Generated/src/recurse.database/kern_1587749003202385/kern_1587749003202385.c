# 1259 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749003202385()
{



int B[1000];
int A[1000][1000][1000];

int b;

for(b = 5; b <= 27; b += 1) {
int a;
kern_1587749003202385: for(a = 4; a <= 11; a += 1) {
A[a][b][a] = A[a-4][b-5][a-4]+42;

A[a][b][a] = A[a+2][b+2][a+2]+B[a];

A[a][b][a] = A[a][b][a]*48;
B[a] = A[a][b+4][a+4]*49;
}
}





return 0;
}
