# 1841 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587748998006003()
{



int B[1000][1000][1000];
int A[1000];

int c;

for(c = 3; c <= 13; c += 1) {
int b;
for(b = 3; b <= 10; b += 1) {
int a;
kern_1587748998006003: for(a = 3; a <= 12; a += 1) {
A[a] = A[a+2]*B[a][b][c];

B[a][b][c] = 1;
B[a-3][b-3][c-3] = A[a];

B[a][b][c] = 12;
}
}
}





return 0;
}
