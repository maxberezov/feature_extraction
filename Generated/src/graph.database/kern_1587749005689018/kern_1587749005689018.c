# 248 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749005689018()
{



int A[1000];
int B[1000][1000];

int b;

for(b = 5; b <= 124; b += 1) {
int a;
kern_1587749005689018: for(a = 3; a <= 250; a += 1) {
A[a] = A[a+3]+47;

A[a] = B[a][b]*A[a];
B[a][b] = A[a];

B[a][b] = B[a+5][b+3]-48;
}
}





return 0;
}
