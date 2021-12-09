int kern_1587749001052281()
{
   
   
   
   int A[1000];
   int B[1000][1000][1000];

   int c;

   for(c = 5; c <= 63; c += 1) {
      int b;
      for(b = 2; b <= 15; b += 1) {
         int a;
kern_1587749001052281:
         for(a = 5; a <= 15; a += 1) {
            A[a] = A[a-2]+30;

            A[a] = A[a+1]*B[a][b][c];

            int var_a = B[a][b][c]-33;
            int var_b = B[a][b-2][c-5]-31;
         }
      }
   }
   
   
   
   
   
   return 0;
}
