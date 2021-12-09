double * create_one_dim_double(int size_dim1, char init_with[])
{
   
   // Allocating one dimensional dynamic array
   double *array = malloc(size_dim1*sizeof(double));
   {
      int i;
      
      // Accessing one dimensional array
      for(i = 0; i <= size_dim1-1; i += 1)
         if (strcmp(init_with, "zeros")==0)
            *(array+i) = 0;
         else if (strcmp(init_with, "ones")==0)
            *(array+i) = 1;
         else
            *(array+i) = (double) rand()/((double) 2147483647+1);
   }

   return array;
}
