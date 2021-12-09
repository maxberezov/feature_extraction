int kern_1587749007563882()
{
   
   
   
   int B[1000];
   int A[1000][1000];
   int C[1000][1000];

   int d;

   for(d = 4; d <= 127; d += 1) {
      int c;
      for(c = 2; c <= 511; c += 1) {
         int b;
         for(b = 2; b <= 511; b += 1) {
            int a;
kern_1587749007563882:
            for(a = 2; a <= 511; a += 1) {
               int var_a = C[a][b]*38;
               int var_b = C[a-2][b-4]+22;
            }
         }
      }
   }
   
   
   
   
   
   
   return 0;
}
