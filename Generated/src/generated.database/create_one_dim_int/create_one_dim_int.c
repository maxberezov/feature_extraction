# 135 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
int *create_one_dim_int(int size_dim1, char init_with[])
{

    // Allocating one dimensional dynamic array
    int *array = malloc(size_dim1 * sizeof(int));

    // Accessing one dimensional array
    for (int i = 0; i<size_dim1; i++)
        if (strcmp(init_with, "zeros")==0)
         *(array+i) = 0;
     else if (strcmp(init_with, "ones")==0)
         *(array+i) = 1;
     else
         *(array+i) = rand() % 20 + 1;

 return array;
}
