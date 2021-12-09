# 2098 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749008762926()
{



int A[1000];
int B[1000];

int c;

for(c = 2; c <= 524282; c += 1) {
int b;
for(b = 2; b <= 524282; b += 1) {
int a;
kern_1587749008762926: for(a = 2; a <= 524282; a += 1) {
A[a] = 4;
A[a] = A[a]-B[a];

A[a] = A[a-2]*B[a];

A[a] = A[a+3]*B[a];

B[a] = B[a+5]*34;

B[a] = B[a+1]*30;
}
}
}





return 0;
}
