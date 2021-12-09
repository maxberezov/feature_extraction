# 2644 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/src/kern_1587749006.214207.c"
int main(int argc, const char *argv[])
{
srand(time((void *) 0));


int ***B = create_three_dim_int(64, 16, 16, "ones");
int ***C = create_three_dim_int(64, 16, 64, "ones");
int **A = create_two_dim_int(512, 512, "ones");
int ***D = create_three_dim_int(64, 32, 16, "ones");
int *E = create_one_dim_int(262144, "ones");
clock_t start = clock();
{
int b;

for(b = 0; b <= 506; b += 1) {
int a;
inner: for(a = 0; a <= 507; a += 1) {
A[a][b] = C[a][b][a]*E[a];
A[a+4][b+5] = B[a][b][a]*D[a][b][a]+D[a][b][a];
}
}
}

clock_t stop = clock();
double elapsed = (double) (stop-start)/((clock_t) 1000000);
printf("%f", elapsed);
deallocate_3d_array(B, 64, 16, 16);
deallocate_3d_array(C, 64, 16, 64);
deallocate_2d_array(A, 512, 512);
deallocate_3d_array(D, 64, 32, 16);
deallocate_1d_array(E);
return 0;
}
