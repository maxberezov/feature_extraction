int kern_1587749009308153()
{
   
   
   
   int A[1000];
   int B[1000][1000];
   int C[1000];

   int b;

   for(b = 0; b <= 125; b += 1) {
      int a;
kern_1587749009308153:
      for(a = 0; a <= 508; a += 1) {
         B[a][b] = B[a+3][b+2]-42;

         int var_a = C[a]-29;
         C[a] = 31;
      }
   }
   
   
   
   
   
   
   return 0;
}
