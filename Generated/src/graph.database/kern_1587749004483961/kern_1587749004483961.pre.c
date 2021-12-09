int kern_1587749004483961()
{
   
   
   
   int B[1000];
   int A[1000][1000][1000];

   int b;

   for(b = 2; b <= 59; b += 1) {
      int a;
kern_1587749004483961:
      for(a = 5; a <= 58; a += 1) {
         B[a] = B[a-5]-34;

         A[a][b][a] = A[a+5][b+4][a+1]-14;

         A[a][b][a] = A[a+3][b+1][a+2]-8;

         B[a] = 10;

         int var_a = A[a][b][a]+44;
         int var_b = A[a-5][b-2][a-1]-41;
      }
   }
   
   
   
   
   
   return 0;
}
