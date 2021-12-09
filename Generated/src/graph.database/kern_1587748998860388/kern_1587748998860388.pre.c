int kern_1587748998860388()
{
   
   
   
   int B[1000];
   int C[1000][1000][1000];
   int A[1000][1000][1000];

   int a;

kern_1587748998860388:
   for(a = 5; a <= 58; a += 1) {
      int var_a = A[a][a][a]-21;
      int var_b = A[a+5][a+1][a+5]*38;

      int var_c = A[a][a][a]+21;
      int var_d = A[a][a+5][a+2]+27;

      B[a] = B[a]*C[a][a][a];
      C[a][a][a] = B[a-5]-A[a][a][a]+C[a][a][a];

      A[a][a][a] = B[a]*C[a][a][a];
      A[a][a][a] = B[a+3]+A[a][a][a]-C[a][a][a];
   }
   
   
   
   
   
   
   return 0;
}
