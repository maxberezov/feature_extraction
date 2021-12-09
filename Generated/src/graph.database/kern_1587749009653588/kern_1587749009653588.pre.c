int kern_1587749009653588()
{
   
   
   
   int B[1000][1000];
   int A[1000][1000][1000];
   int C[1000][1000];

   int a;

kern_1587749009653588:
   for(a = 5; a <= 11; a += 1) {
      C[a][a] = C[a-3][a-5]+45;

      C[a][a] = C[a+2][a+5]-19+B[a][a];

      A[a][a][a] = A[a+2][a+1][a+2]-45;

      A[a][a][a] = C[a][a]-B[a][a];

      int var_a = C[a][a]+25;
      int var_b = C[a][a-3]+14;

      A[a][a][a] = A[a][a][a]*C[a][a]+9;
      B[a][a] = A[a-5][a-1][a-5]+B[a][a]*C[a][a];
   }
   
   
   
   
   
   
   return 0;
}
