int kern_1587749000172829()
{
   
   
   
   int B[1000];
   int A[1000];

   int d;

   for(d = 2; d <= 65530; d += 1) {
      int c;
      for(c = 2; c <= 65530; c += 1) {
         int b;
         for(b = 2; b <= 65530; b += 1) {
            int a;
kern_1587749000172829:
            for(a = 2; a <= 65530; a += 1) {
               B[a] = B[a-2]-7;

               B[a] = B[a+4]+32;
            }
         }
      }
   }
   
   
   
   
   
   return 0;
}
