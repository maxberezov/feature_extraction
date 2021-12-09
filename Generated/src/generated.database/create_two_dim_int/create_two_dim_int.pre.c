int * * create_two_dim_int(int size_dim1, int size_dim2, char init_with[])
{
   // Allocating two dimensional dynamic array
   int **array = (int **) malloc(size_dim1*sizeof(int *));
   {
      int i;
      for(i = 0; i <= size_dim1-1; i += 1)
         array[i] = (int *) malloc(size_dim2*sizeof(int));
   }
   {
      int i;
      
      // Accessing two dimensional array
      for(i = 0; i <= size_dim1-1; i += 1) {
         int j;
         for(j = 0; j <= size_dim2-1; j += 1)
            if (strcmp(init_with, "zeros")==0)
               array[i][j] = 0;
            else if (strcmp(init_with, "ones")==0)
               array[i][j] = 1;
            else
               array[i][j] = rand()%20+1;
      }
   }

   return array;
}
