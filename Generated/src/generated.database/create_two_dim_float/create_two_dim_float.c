# 23 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
float **create_two_dim_float(int size_dim1, int size_dim2, char init_with[])
{
    // Allocating two dimensional dynamic array
    float **array = (float **)malloc(size_dim1 * sizeof(float *));
    for (int i=0; i<size_dim1; i++)
        array[i] = (float *)malloc(size_dim2 * sizeof(float));

    // Accessing two dimensional array
 for (int i = 0; i<size_dim1; i++)
  for (int j = 0; j<size_dim2; j++)
      if (strcmp(init_with, "zeros")==0)
             array[i][j] = 0;
         else if (strcmp(init_with, "ones")==0)
             array[i][j] = 1;
         else
             array[i][j] = (float) rand() / ((float) 
# 38 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c" 3 4
                                                    2147483647 
# 38 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
                                                             + 1);

 return array;
}
