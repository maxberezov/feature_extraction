# 1373 "/home/maksim/PycharmProjects/unrolling/Generated/merged.c"
int kern_1587749007729511()
{



int A[1000][1000];
int B[1000];

int a;

kern_1587749007729511: for(a = 4; a <= 252; a += 1) {
B[a] = B[a-4]+44;

A[a][a] = 17;
A[a][a+3] = 38;

B[a] = B[a]+A[a][a];
A[a][a] = B[a+5]*A[a][a];
}





return 0;
}
