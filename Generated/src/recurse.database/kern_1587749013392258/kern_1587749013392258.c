# 1234 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749013392258()
{



int A[1000][1000][1000];
int B[1000][1000];

int a;

kern_1587749013392258: for(a = 3; a <= 58; a += 1) {
A[a][a][a] = A[a][a-1][a-3]+B[a][a];

B[a][a] = A[a][a][a];
A[a][a][a] = B[a][a]+7;

A[a][a][a] = A[a+1][a+3][a+5]*16;
}





return 0;
}
