int kern_158774899977151()
{
   
   
   
   int B[1000][1000][1000];
   int A[1000];

   int b;

   for(b = 4; b <= 63; b += 1) {
      int a;
kern_158774899977151:
      for(a = 5; a <= 15; a += 1) {
         A[a] = A[a-5]*B[a][b][a];

         B[a][b][a] = B[a-5][b-4][a-1]*20;

         A[a] = A[a-1]+35;

         int var_a = B[a][b][a]*38;
         int var_b = B[a-1][b-2][a-3]*49;

         int var_c = B[a][b][a]*29;
         int var_d = B[a-1][b-2][a]-7;
      }
   }
   
   
   
   
   
   return 0;
}
