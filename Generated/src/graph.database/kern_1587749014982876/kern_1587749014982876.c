# 1101 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749014982876()
{



int B[1000];
int C[1000][1000];
int A[1000];

int a;

kern_1587749014982876: for(a = 5; a <= 127; a += 1) {
A[a] = A[a-3]*45;

A[a] = A[a-4]-9;

B[a] = B[a-2]-34;

C[a][a] = C[a-2][a-5]*16;

B[a] = B[a+3]-45;
}






return 0;
}
