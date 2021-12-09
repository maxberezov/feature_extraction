int kern_1587749015322232()
{
   
   
   
   int B[1000][1000][1000];
   int C[1000];
   int A[1000][1000];

   int d;

   for(d = 0; d <= 13; d += 1) {
      int c;
      for(c = 4; c <= 60; c += 1) {
         int b;
         for(b = 2; b <= 15; b += 1) {
            int a;
kern_1587749015322232:
            for(a = 2; a <= 15; a += 1) {
               B[a][b][c] = B[a][b-3][c]*C[a]-A[a][b];

               A[a][b] = A[a-2][b-4]*40;

               C[a] = C[a+4]-10;

               B[a][b][c] = B[a][b+3][c+2]+A[a][b]*C[a];
            }
         }
      }
   }
   
   
   
   
   
   
   return 0;
}
