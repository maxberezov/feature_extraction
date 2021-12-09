int kern_1587749007396552()
{
   
   
   
   int C[1000];
   int A[1000];
   int B[1000];

   int b;

   for(b = 2; b <= 65535; b += 1) {
      int a;
kern_1587749007396552:
      for(a = 2; a <= 65535; a += 1) {
         B[a] = B[a+3]-C[a];

         B[a] = 37;

         C[a] = A[a]-B[a];
         B[a] = A[a-2]*B[a]-C[a];
      }
   }
   
   
   
   
   
   
   return 0;
}
