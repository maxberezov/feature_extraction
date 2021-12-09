# 427 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749011292936()
{



int A[1000];
int B[1000][1000][1000];
int D[1000];
int C[1000][1000][1000];

int b;

for(b = 0; b <= 27; b += 1) {
int a;
kern_1587749011292936: for(a = 0; a <= 58; a += 1) {
A[a] = A[a+1]+D[a]-C[a][b][a]*B[a][b][a];

B[a][b][a] = B[a+1][b+4][a]-33;

int var_a = A[a]-0;
int var_b = A[a]*17;

C[a][b][a] = C[a][b][a]-A[a]*A[a];
B[a][b][a] = C[a+3][b+1][a+5]+B[a][b][a]-A[a];
}
}







return 0;
}
