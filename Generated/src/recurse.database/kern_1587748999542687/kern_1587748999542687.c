# 168 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587748999542687()
{



int A[1000][1000];
int B[1000][1000];

int a;

kern_1587748999542687: for(a = 4; a <= 124; a += 1) {
B[a][a] = 35;
B[a+3][a+2] = A[a][a];

B[a][a] = A[a][a];
}





return 0;
}
