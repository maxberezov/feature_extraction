# 191 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749009106069()
{



int A[1000][1000][1000];
int B[1000][1000][1000];

int b;

for(b = 2; b <= 63; b += 1) {
int a;
kern_1587749009106069: for(a = 5; a <= 27; a += 1) {
B[a][b][a] = B[a-4][b-1][a-3]-12;

A[a][b][a] = A[a+4][b][a+4]+B[a][b][a];

B[a][b][a] = 50;
}
}





return 0;
}
