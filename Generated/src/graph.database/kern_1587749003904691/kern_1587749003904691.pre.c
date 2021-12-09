int kern_1587749003904691()
{
   
   
   
   int C[1000][1000];
   int E[1000][1000][1000];
   int A[1000];
   int D[1000];
   int B[1000][1000][1000];

   int c;

   for(c = 3; c <= 31; c += 1) {
      int b;
      for(b = 1; b <= 61; b += 1) {
         int a;
kern_1587749003904691:
         for(a = 2; a <= 61; a += 1) {
            E[a][b][c] = E[a-2][b-1][c-3]+32;

            int var_a = B[a][b][c]-5;
            int var_b = B[a+2][b+2][c]+10;
         }
      }
   }
   return 0;
}
