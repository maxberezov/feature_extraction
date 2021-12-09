# 765 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749013585037()
{



int B[1000];
int A[1000][1000][1000];

int c;

for(c = 3; c <= 10; c += 1) {
int b;
for(b = 0; b <= 60; b += 1) {
int a;
kern_1587749013585037: for(a = 2; a <= 60; a += 1) {
B[a] = B[a+3]-A[a][b][c];

B[a] = B[a+4]*A[a][b][c];

A[a][b][c] = A[a+3][b+3][c+5]-B[a];

A[a][b][c] = 49;
}
}
}





return 0;
}
