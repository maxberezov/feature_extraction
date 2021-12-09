# 2061 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749000536372()
{



int B[1000][1000][1000];
int A[1000];
int C[1000];

int c;

for(c = 2; c <= 63; c += 1) {
int b;
for(b = 4; b <= 31; b += 1) {
int a;
kern_1587749000536372: for(a = 5; a <= 63; a += 1) {
B[a][b][c] = B[a-5][b-2][c]*41;

C[a] = C[a+5]+16;

C[a] = 27;

B[a][b][c] = 31;

int var_a = A[a]+8;
int var_b = A[a-5]-9;
}
}
}






return 0;
}
