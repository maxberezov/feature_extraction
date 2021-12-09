int kern_1587749002369943()
{
   
   
   
   int B[1000][1000];
   int A[1000][1000];

   int c;

   for(c = 5; c <= 506; c += 1) {
      int b;
      for(b = 5; b <= 123; b += 1) {
         int a;
kern_1587749002369943:
         for(a = 5; a <= 123; a += 1) {
            A[a][b] = A[a+1][b+2]-27;

            A[a][b] = 7;
         }
      }
   }
   
   
   
   
   
   return 0;
}
