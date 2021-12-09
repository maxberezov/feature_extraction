int kern_158774900432248()
{
   
   
   
   int A[1000][1000][1000];
   int B[1000][1000];

   int d;

   for(d = 0; d <= 250; d += 1) {
      int c;
      for(c = 0; c <= 509; c += 1) {
         int b;
         for(b = 0; b <= 509; b += 1) {
            int a;
kern_158774900432248:
            for(a = 0; a <= 509; a += 1) {
               B[a][b] = B[a+2][b+2]*29;

               B[a][b] = 9;

               A[a][b][c] = B[a][b]*5;
               B[a][b] = B[a][b+5]*A[a][b][c];
            }
         }
      }
   }
   
   
   
   
   
   return 0;
}
