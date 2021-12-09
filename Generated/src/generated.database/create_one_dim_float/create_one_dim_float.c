# 4 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
float *create_one_dim_float(int size_dim1, char init_with[])
{

    // Allocating one dimensional dynamic array
    float *array = malloc(size_dim1 * sizeof(float));

    // Accessing one dimensional array
     for (int i = 0; i<size_dim1; i++)
         if (strcmp(init_with, "zeros")==0)
             *(array+i) = 0;
         else if (strcmp(init_with, "ones")==0)
             *(array+i) = 1;
         else
             *(array+i) = (float) rand() / ((float) 
# 17 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c" 3 4
                                                   2147483647 
# 17 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
                                                            + 1);

 return array;
}
