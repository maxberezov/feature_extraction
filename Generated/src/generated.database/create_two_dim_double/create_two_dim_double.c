# 88 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
double **create_two_dim_double(int size_dim1, int size_dim2, char init_with[])
{
    // Allocating two dimensional dynamic array
    double **array = (double **)malloc(size_dim1 * sizeof(double *));
    for (int i=0; i<size_dim1; i++)
        array[i] = (double *)malloc(size_dim2 * sizeof(double));

    // Accessing two dimensional array
 for (int i = 0; i<size_dim1; i++)
  for (int j = 0; j<size_dim2; j++)
      if (strcmp(init_with, "zeros")==0)
             array[i][j] = 0;
         else if (strcmp(init_with, "ones")==0)
             array[i][j] = 1;
         else
             array[i][j] = (double) rand() / ((double) 
# 103 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c" 3 4
                                                      2147483647 
# 103 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
                                                               + 1);

 return array;
}
