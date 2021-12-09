int kern_1587749001752524()
{
   
   
   
   int A[1000][1000];
   int B[1000];

   int d;

   for(d = 0; d <= 253; d += 1) {
      int c;
      for(c = 4; c <= 252; c += 1) {
         int b;
         for(b = 4; b <= 252; b += 1) {
            int a;
kern_1587749001752524:
            for(a = 4; a <= 252; a += 1) {
               B[a] = B[a+2]-A[a][b];

               int var_a = A[a][b]*29;
               A[a][b] = 24;

               int var_b = B[a]*3;
               int var_c = B[a-4]*7;

               int var_d = A[a][b]*30;
               int var_e = A[a+3][b+2]-4;
            }
         }
      }
   }
   
   
   
   
   
   return 0;
}
