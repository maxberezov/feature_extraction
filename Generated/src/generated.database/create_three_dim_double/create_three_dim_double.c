# 108 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
double ***create_three_dim_double(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
 // Allocating three dimensional dynamic array
 double ***array =(double ***) malloc(size_dim1 * sizeof(double ***));
 for(int i=0; i<size_dim1; i++)
 {
  array[i]=(double **)malloc(size_dim2 * sizeof(double *));
  for(int j=0; j<size_dim2; j++)
   array[i][j]=(double *)malloc(size_dim3 * sizeof(double));
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
        array[k][i][j] = (double) rand() / ((double) 
# 128 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c" 3 4
                                                    2147483647 
# 128 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
                                                             + 1);

 return array;
}
