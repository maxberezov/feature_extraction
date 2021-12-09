int kern_1587749014640864()
{
   
   
   
   int A[1000][1000];
   int B[1000][1000];

   int c;

   for(c = 0; c <= 123; c += 1) {
      int b;
      for(b = 2; b <= 123; b += 1) {
         int a;
kern_1587749014640864:
         for(a = 2; a <= 123; a += 1) {
            B[a][b] = B[a-2][b]-45;

            A[a][b] = A[a+4][b+4]-B[a][b];
         }
      }
   }
   
   
   
   
   
   return 0;
}
