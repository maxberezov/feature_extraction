# 671 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749010939646()
{



int B[1000][1000][1000];
int A[1000][1000][1000];

int c;

for(c = 4; c <= 31; c += 1) {
int b;
for(b = 1; b <= 15; b += 1) {
int a;
kern_1587749010939646: for(a = 3; a <= 26; a += 1) {
A[a][b][c] = A[a-3][b-1][c-4]+25;

B[a][b][c] = B[a+5][b+1][c+1]-21;
}
}
}





return 0;
}
