# 179 "/home/maksim/PycharmProjects/data_collection_unrolling/Benchmarks/Generated_kernels/init_array_lib/init_dyn_array.c"
int ***create_three_dim_int(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
 // Allocating three dimensional dynamic array
 int ***array =(int ***) malloc(size_dim1 * sizeof(int ***));
 for(int i=0; i<size_dim1; i++)
 {
  array[i]=(int **)malloc(size_dim2 * sizeof(int *));
  for(int j=0; j<size_dim2; j++)
   array[i][j]=(int *)malloc(size_dim3 * sizeof(int));
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
        array[k][i][j] = rand() % 20 + 1;

 return array;
}
