int kern_1587749007896029()
{
   
   
   
   int C[1000];
   int E[1000][1000];
   int B[1000][1000];
   int D[1000][1000][1000];
   int A[1000][1000];

   int d;

   for(d = 0; d <= 122; d += 1) {
      int c;
      for(c = 0; c <= 507; c += 1) {
         int b;
         for(b = 0; b <= 507; b += 1) {
            int a;
kern_1587749007896029:
            for(a = 0; a <= 507; a += 1) {
               C[a] = C[a+2]+46;

               E[a][b] = E[a+4][b+5]+C[a]-A[a][b]*D[a][b][c];

               D[a][b][c] = C[a]+E[a][b]*B[a][b]-E[a][b]-A[a][b];
               B[a][b] = C[a+3]-E[a][b]*D[a][b][c];
            }
         }
      }
   }
   return 0;
}
