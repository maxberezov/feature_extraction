int kern_1587748998175907()
{
   
   
   
   int A[1000][1000];

   int a;

kern_1587748998175907:
   for(a = 5; a <= 511; a += 1) {
      A[a][a] = A[a-5][a-5]*4;

      int var_a = A[a][a]-16;
      int var_b = A[a][a-5]-23;
   }
   
   
   
   
   return 0;
}
