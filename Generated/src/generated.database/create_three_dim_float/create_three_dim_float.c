# 43 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
float ***create_three_dim_float(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
 // Allocating three dimensional dynamic array
 float ***array =(float ***) malloc(size_dim1 * sizeof(float ***));
 for(int i=0; i<size_dim1; i++)
 {
  array[i]=(float **)malloc(size_dim2 * sizeof(float *));
  for(int j=0; j<size_dim2; j++)
   array[i][j]=(float *)malloc(size_dim3 * sizeof(float));
 }

 // Accessing three dimensional array
 for(int k=0; k<size_dim1; k++)
  for(int i=0; i<size_dim2; i++)
   for(int j=0; j<size_dim3; j++)
       if (strcmp(init_with, "zeros")==0)
        array[k][i][j] = 0;
    else if (strcmp(init_with, "ones")==0)
        array[k][i][j] = 1;
    else
        array[k][i][j] = (float) rand() / ((float) 
# 63 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c" 3 4
                                                  2147483647 
# 63 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
                                                           + 1);

 return array;
}
