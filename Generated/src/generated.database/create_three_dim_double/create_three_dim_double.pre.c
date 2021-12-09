double * * * create_three_dim_double(int size_dim1, int size_dim2, int size_dim3, char init_with[])
{
   // Allocating three dimensional dynamic array
   double ***array = (double ***) malloc(size_dim1*sizeof(double * * *));
   {
      int i;
      for(i = 0; i <= size_dim1-1; i += 1) {
         array[i] = (double **) malloc(size_dim2*sizeof(double *));
         {
            int j;
            for(j = 0; j <= size_dim2-1; j += 1)
               array[i][j] = (double *) malloc(size_dim3*sizeof(double));
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
                  array[k][i][j] = (double) rand()/((double) 2147483647+1);
         }
      }
   }

   return array;
}
