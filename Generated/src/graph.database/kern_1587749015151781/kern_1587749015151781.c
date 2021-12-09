# 1604 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749015151781()
{



int A[1000][1000][1000];
int B[1000][1000];

int c;

for(c = 2; c <= 58; c += 1) {
int b;
for(b = 3; b <= 61; b += 1) {
int a;
kern_1587749015151781: for(a = 5; a <= 61; a += 1) {
B[a][b] = B[a-4][b-3]*2;

A[a][b][c] = B[a][b];
A[a-5][b-2][c-2] = B[a][b];

A[a][b][c] = B[a][b];

A[a][b][c] = B[a][b]*A[a][b][c];
B[a][b] = B[a-3][b-1]+1;
}
}
}





return 0;
}
