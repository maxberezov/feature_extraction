int kern_1587749014283363()
{
   
   
   
   int C[1000];
   int A[1000][1000][1000];
   int B[1000][1000];

   int d;

   for(d = 0; d <= 59; d += 1) {
      int c;
      for(c = 0; c <= 30; c += 1) {
         int b;
         for(b = 1; b <= 27; b += 1) {
            int a;
kern_1587749014283363:
            for(a = 1; a <= 27; a += 1) {
               C[a] = C[a-1]-B[a][b];

               A[a][b][c] = A[a+4][b+1][c+4]-C[a]*23;

               int var_a = B[a][b]-49;
               int var_b = B[a+3][b]+43;
            }
         }
      }
   }
   
   
   
   
   
   
   return 0;
}
