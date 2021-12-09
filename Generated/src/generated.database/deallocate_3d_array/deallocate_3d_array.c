# 214 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
void deallocate_3d_array(int*** a,int l,int m, int k)
{
    int i,j;
    for(i=0;i<l;i++)
    {
        for(int j=0;j<m;j++)
        {
                free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);
}
