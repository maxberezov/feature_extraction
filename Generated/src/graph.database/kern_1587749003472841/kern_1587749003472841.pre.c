int kern_1587749003472841()
{
   
   
   
   int A[1000][1000];

   int c;

   for(c = 5; c <= 251; c += 1) {
      int b;
      for(b = 4; b <= 511; b += 1) {
         int a;
kern_1587749003472841:
         for(a = 4; a <= 511; a += 1) {
            A[a][b] = A[a][b+4]*19;

            int var_a = A[a][b]*30;
            int var_b = A[a-4][b-5]+18;

            int var_c = A[a][b]*48;
            int var_d = A[a][b-3]*35;
         }
      }
   }
   
   
   
   
   return 0;
}
