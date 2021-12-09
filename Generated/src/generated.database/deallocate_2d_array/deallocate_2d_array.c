# 207 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
void deallocate_2d_array(int **a, int l, int m) {
    int i;
    for (i = 0; i < l; ++i) {
        free(a[i]);
    }
    free(a);
}
