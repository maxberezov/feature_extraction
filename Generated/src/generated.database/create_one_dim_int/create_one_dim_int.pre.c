int * create_one_dim_int(int size_dim1, char init_with[])
{
   
   // Allocating one dimensional dynamic array
   int *array = malloc(size_dim1*sizeof(int));
   {
      int i;
      
      // Accessing one dimensional array
      for(i = 0; i <= size_dim1-1; i += 1)
         if (strcmp(init_with, "zeros")==0)
            *(array+i) = 0;
         else if (strcmp(init_with, "ones")==0)
            *(array+i) = 1;
         else
            *(array+i) = rand()%20+1;
   }

   return array;
}
