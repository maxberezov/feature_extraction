void kernel_adi(int tsteps, int n, double u[1000+0][1000+0], double v[1000+0][1000+0], double p[1000+0][1000+0], double q[1000+0][1000+0])
{
   int t, i, j;
   double DX, DY, DT;
   double B1, B2;
   double mul1, mul2;
   double a, b, c, d, e, f;

#pragma scop
   DX = 1.0/((double) n);
   DY = 1.0/((double) n);
   DT = 1.0/((double) tsteps);
   B1 = 2.0;
   B2 = 1.0;
   mul1 = B1*DT/(DX*DX);
   mul2 = B2*DT/(DY*DY);

   a = -mul1/2.0;
   b = 1.0+mul1;
   c = a;
   d = -mul2/2.0;
   e = 1.0+mul2;
   f = d;

   polybench_timer_start();

   for(t = 1; t <= tsteps; t += 1) {
      //Column Sweep
      for(i = 1; i <= n-1-1; i += 1) {
         v[0][i] = 1.0;
         p[i][0] = 0.0;
         q[i][0] = v[0][i];
         for(j = 1; j <= n-1-1; j += 1) {
            p[i][j] = -c/(a*p[i][j-1]+b);
            q[i][j] = (-d*u[j][i-1]+(1.0+2.0*d)*u[j][i]-f*u[j][i+1]-a*q[i][j-1])/(a*p[i][j-1]+b);
         }

         v[n-1][i] = 1.0;
         for(j = n-2; j >= 1; j += -1)
            v[j][i] = p[i][j]*v[j+1][i]+q[i][j];
      }
      //Row Sweep
      for(i = 1; i <= n-1-1; i += 1) {
         u[i][0] = 1.0;
         p[i][0] = 0.0;
         q[i][0] = u[i][0];
         for(j = 1; j <= n-1-1; j += 1) {
            p[i][j] = -f/(d*p[i][j-1]+e);
            q[i][j] = (-a*v[i-1][j]+(1.0+2.0*a)*v[i][j]-c*v[i+1][j]-d*q[i][j-1])/(d*p[i][j-1]+e);
         }
         u[i][n-1] = 1.0;
loop_1:
         for(j = n-2; j >= 1; j += -1)
            u[i][j] = p[i][j]*u[i][j+1]+q[i][j];
      }
   }
   polybench_timer_stop();

   polybench_timer_print();
#pragma endscop

}
