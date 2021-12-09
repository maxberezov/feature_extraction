float * * * create_three_dim_float(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
   // Allocating three dimensional dynamic array
   float ***array = (float ***) malloc(size_dim1*sizeof(float * * *));
   {
      int i;
      for(i = 0; i <= size_dim1-1; i += 1) {
         array[i] = (float **) malloc(size_dim2*sizeof(float *));
         {
            int j;
            for(j = 0; j <= size_dim2-1; j += 1)
               array[i][j] = (float *) malloc(size_dim3*sizeof(float));
         }
      }
   }
   {
      int k;
      
      // Accessing three dimensional array
      for(k = 0; k <= size_dim1-1; k += 1) {
         int i;
         for(i = 0; i <= size_dim2-1; i += 1) {
            int j;
            for(j = 0; j <= size_dim3-1; j += 1)
               if (strcmp(init_with, "zeros")==0)
                  array[k][i][j] = 0;
               else if (strcmp(init_with, "ones")==0)
                  array[k][i][j] = 1;
               else
                  array[k][i][j] = (float) rand()/((float) 2147483647+1);
         }
      }
   }

   return array;
}
