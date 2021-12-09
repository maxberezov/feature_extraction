int kern_1587749000884613()
{
   
   
   
   int A[1000][1000];
   int B[1000];
   int C[1000][1000];

   int a;

kern_1587749000884613:
   for(a = 0; a <= 251; a += 1) {
      A[a][a] = B[a];
      A[a+4][a+1] = C[a][a]*B[a];
   }
   
   
   
   
   
   
   return 0;
}
