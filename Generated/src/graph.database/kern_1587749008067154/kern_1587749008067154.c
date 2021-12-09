# 398 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749008067154()
{



int A[1000][1000];

int d;

for(d = 3; d <= 510; d += 1) {
int c;
for(c = 5; c <= 508; c += 1) {
int b;
for(b = 5; b <= 508; b += 1) {
int a;
kern_1587749008067154: for(a = 5; a <= 508; a += 1) {
A[a][b] = A[a+3][b+1]*4;

A[a][b] = 20;
}
}
}
}




return 0;
}
