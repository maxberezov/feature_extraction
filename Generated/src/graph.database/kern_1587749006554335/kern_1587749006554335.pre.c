int kern_1587749006554335()
{
   
   
   
   int C[1000][1000][1000];
   int B[1000][1000];
   int A[1000][1000][1000];

   int d;

   for(d = 4; d <= 15; d += 1) {
      int c;
      for(c = 5; c <= 15; c += 1) {
         int b;
         for(b = 5; b <= 15; b += 1) {
            int a;
kern_1587749006554335:
            for(a = 5; a <= 15; a += 1) {
               A[a][b][c] = A[a][b][c-1]+26;

               B[a][b] = B[a+5][b]+C[a][b][c];

               C[a][b][c] = 24;
               C[a-4][b-5][c-3] = 23;

               C[a][b][c] = 36;

               C[a][b][c] = A[a][b][c]-B[a][b]*C[a][b][c];
               A[a][b][c] = A[a-1][b-4][c-1]-C[a][b][c]+B[a][b];
            }
         }
      }
   }
   
   
   
   
   
   
   return 0;
}
