float * * create_two_dim_float(int size_dim1, int size_dim2, char init_with[])
{
   // Allocating two dimensional dynamic array
   float **array = (float **) malloc(size_dim1*sizeof(float *));
   {
      int i;
      for(i = 0; i <= size_dim1-1; i += 1)
         array[i] = (float *) malloc(size_dim2*sizeof(float));
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
               array[i][j] = (float) rand()/((float) 2147483647+1);
      }
   }

   return array;
}
