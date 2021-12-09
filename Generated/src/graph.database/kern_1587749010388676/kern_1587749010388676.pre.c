int kern_1587749010388676()
{
   
   
   
   int A[1000][1000];
   int B[1000][1000];
   int C[1000][1000][1000];

   int b;

   for(b = 4; b <= 15; b += 1) {
      int a;
kern_1587749010388676:
      for(a = 5; a <= 63; a += 1) {
         A[a][b] = A[a+2][b+5]+27;

         B[a][b] = C[a][b][a]-A[a][b];
         B[a+2][b+5] = A[a][b];

         int var_a = A[a][b]+8;
         int var_b = A[a][b+3]-6;

         A[a][b] = C[a][b][a]-29;
         B[a][b] = C[a-5][b-4][a-4]*4;
      }
   }
   
   
   
   
   
   
   return 0;
}
