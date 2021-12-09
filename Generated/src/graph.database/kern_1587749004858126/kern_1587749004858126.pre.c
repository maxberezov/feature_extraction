int kern_1587749004858126()
{
   
   
   
   int A[1000][1000];
   int B[1000][1000][1000];

   int d;

   for(d = 4; d <= 10; d += 1) {
      int c;
      for(c = 3; c <= 27; c += 1) {
         int b;
         for(b = 4; b <= 13; b += 1) {
            int a;
kern_1587749004858126:
            for(a = 4; a <= 13; a += 1) {
               B[a][b][c] = B[a-4][b-3][c-4]*42;

               A[a][b] = 50;
               A[a+1][b+1] = 5;

               A[a][b] = A[a][b]+B[a][b][c];
               B[a][b][c] = A[a+4][b+1]-B[a][b][c];

               int var_a = B[a][b][c]-6;
               int var_b = B[a+2][b+4][c+5]-30;
            }
         }
      }
   }
   
   
   
   
   
   return 0;
}
