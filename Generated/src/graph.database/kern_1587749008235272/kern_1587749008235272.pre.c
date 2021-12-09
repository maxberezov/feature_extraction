int kern_1587749008235272()
{
   
   
   
   int B[1000][1000][1000];
   int A[1000][1000];
   int C[1000][1000];

   int c;

   for(c = 1; c <= 15; c += 1) {
      int b;
      for(b = 2; b <= 15; b += 1) {
         int a;
kern_1587749008235272:
         for(a = 3; a <= 63; a += 1) {
            B[a][b][c] = 8+C[a][b];
            B[a-3][b-2][c-1] = A[a][b]*C[a][b];

            A[a][b] = 24;
            A[a+4][b+2] = 28;

            A[a][b] = C[a][b]*6-B[a][b][c];
            C[a][b] = C[a][b-2]+B[a][b][c];
         }
      }
   }
   
   
   
   
   
   
   return 0;
}
