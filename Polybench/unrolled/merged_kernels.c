static void kernel_2mm(int ni, int nj, int nk, int nl, double alpha, double beta, double tmp[800+0][900+0], double A[800+0][1100+0], double B[1100+0][900+0], double C[900+0][1200+0], double D[800+0][1200+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nj-1; j += 1) {
         tmp[i][j] = 0.0;
kernel_2mm_loop_1:         for(k = 0; k <= nk-1; k += 1)
            tmp[i][j] += alpha*A[i][k]*B[k][j];
      }
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         D[i][j] *= beta;
kernel_2mm_loop_2:         for(k = 0; k <= nj-1; k += 1)
            D[i][j] += tmp[i][k]*C[k][j];
      }
#pragma endscop

}








static void kernel_gemver(int n, double alpha, double beta, double A[2000+0][2000+0], double u1[2000+0], double v1[2000+0], double u2[2000+0], double v2[2000+0], double w[2000+0], double x[2000+0], double y[2000+0], double z[2000+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1)
kernel_gemver_loop_1:      for(j = 0; j <= n-1; j += 1){
         A[i][j] = A[i][j]+u1[i]*v1[j]+u2[i]*v2[j];
         }

   for(i = 0; i <= n-1; i += 1){
kernel_gemver_loop_2:       for(j = 0; j <= n-1; j += 1){
         x[i] = x[i]+beta*A[j][i]*y[j];}
}

kernel_gemver_loop_3:    for(i = 0; i <= n-1; i += 1){
      x[i] = x[i]+z[i]; }

   for(i = 0; i <= n-1; i += 1)
kernel_gemver_loop_4:       for(j = 0; j <= n-1; j += 1)
         w[i] = w[i]+alpha*A[i][j]*x[j];
#pragma endscop

}



static void kernel_mvt(int n, double x1[2000+0], double x2[2000+0], double y_1[2000+0], double y_2[2000+0], double A[2000+0][2000+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1)
kernel_mvt_loop_1:      for(j = 0; j <= n-1; j += 1)
         x1[i] = x1[i]+A[i][j]*y_1[j];
   for(i = 0; i <= n-1; i += 1)
kernel_mvt_loop_2:      for(j = 0; j <= n-1; j += 1)
         x2[i] = x2[i]+A[j][i]*y_2[j];
#pragma endscop

}
static void kernel_adi(int tsteps, int n, double u[1000+0][1000+0], double v[1000+0][1000+0], double p[1000+0][1000+0], double q[1000+0][1000+0])
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

   for(t = 1; t <= tsteps; t += 1) {
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
      for(i = 1; i <= n-1-1; i += 1) {
         u[i][0] = 1.0;
         p[i][0] = 0.0;
         q[i][0] = u[i][0];
         for(j = 1; j <= n-1-1; j += 1) {
            p[i][j] = -f/(d*p[i][j-1]+e);
            q[i][j] = (-a*v[i-1][j]+(1.0+2.0*a)*v[i][j]-c*v[i+1][j]-d*q[i][j-1])/(d*p[i][j-1]+e);
         }
         u[i][n-1] = 1.0;
kernel_adi_loop_1:         for(j = n-2; j >= 1; j += -1)
            u[i][j] = p[i][j]*u[i][j+1]+q[i][j];
      }
   }
#pragma endscop

}
static void kernel_correlation(int m, int n, double float_n, double data[1400+0][1200+0], double corr[1200+0][1200+0], double mean[1200+0], double stddev[1200+0])
{
   int i, j, k;

   double eps = 0.1;
   
   
#pragma scop
   for(j = 0; j <= m-1; j += 1) {
      mean[j] = 0.0;
kernel_correlation_loop_1:      for(i = 0; i <= n-1; i += 1)
         mean[j] += data[i][j];
      mean[j] /= float_n;
   }
   
   
   for(j = 0; j <= m-1; j += 1) {
      stddev[j] = 0.0;
kernel_correlation_loop_2:      for(i = 0; i <= n-1; i += 1)
         stddev[j] += (data[i][j]-mean[j])*(data[i][j]-mean[j]);
      stddev[j] /= float_n;
      stddev[j] = sqrt(stddev[j]);
      stddev[j] = stddev[j]<=eps?1.0:stddev[j];
   }
   

   for(i = 0; i <= n-1; i += 1){
kernel_correlation_loop_3:      for(j = 0; j <= m-1; j += 1) {
         data[i][j] -= mean[j];
         data[i][j] /= sqrt(float_n)*stddev[j];
      }

  }

   for(i = 0; i <= m-1-1; i += 1) {
      corr[i][i] = 1.0;
      for(j = i+1; j <= m-1; j += 1) {
         corr[i][j] = 0.0;
kernel_correlation_loop_4:         for(k = 0; k <= n-1; k += 1)
            corr[i][j] += data[k][i]*data[k][j];
         corr[j][i] = corr[i][j];
      }
   }
   corr[m-1][m-1] = 1.0;
#pragma endscop

}

static void kernel_covariance(int m, int n, double float_n, double data[1400+0][1200+0], double cov[1200+0][1200+0], double mean[1200+0])
{
   int i, j, k;

#pragma scop
   for(j = 0; j <= m-1; j += 1) {
      mean[j] = 0.0;
kernel_covariance_loop_1:      for(i = 0; i <= n-1; i += 1)
         mean[j] += data[i][j];
      mean[j] /= float_n;
   }

   for(i = 0; i <= n-1; i += 1)
kernel_covariance_loop_2:      for(j = 0; j <= m-1; j += 1)
         data[i][j] -= mean[j];

   for(i = 0; i <= m-1; i += 1)
      for(j = i; j <= m-1; j += 1) {
         cov[i][j] = 0.0;
kernel_covariance_loop_3:         for(k = 0; k <= n-1; k += 1)
            cov[i][j] += data[k][i]*data[k][j];
         cov[i][j] /= float_n-1.0;
         cov[j][i] = cov[i][j];
      }
#pragma endscop

}

static void kernel_3mm(int ni, int nj, int nk, int nl, int nm, double E[800+0][900+0], double A[800+0][1000+0], double B[1000+0][900+0], double F[900+0][1100+0], double C[900+0][1200+0], double D[1200+0][1100+0], double G[800+0][1100+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nj-1; j += 1) {
         E[i][j] = 0.0;
kernel_3mm_loop_1:         for(k = 0; k <= nk-1; k += 1)
            E[i][j] += A[i][k]*B[k][j];
      }

   for(i = 0; i <= nj-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         F[i][j] = 0.0;
kernel_3mm_loop_2:          for(k = 0; k <= nm-1; k += 1)
            F[i][j] += C[i][k]*D[k][j];
      }

   for(i = 0; i <= ni-1; i += 1)
      for(j = 0; j <= nl-1; j += 1) {
         G[i][j] = 0.0;
kernel_3mm_loop_3:          for(k = 0; k <= nj-1; k += 1)
            G[i][j] += E[i][k]*F[k][j];
      }
#pragma endscop

}
static void kernel_ludcmp(int n, double A[2000+0][2000+0], double b[2000+0], double x[2000+0], double y[2000+0])
{
   int i, j, k;

   double w;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i-1; j += 1) {
         w = A[i][j];
         for(k = 0; k <= j-1; k += 1)
            w -= A[i][k]*A[k][j];
         A[i][j] = w/A[j][j];
      }
      for(j = i; j <= n-1; j += 1) {
         w = A[i][j];
kernel_ludcmp_loop_1:         for(k = 0; k <= i-1; k += 1)
            w -= A[i][k]*A[k][j];
         A[i][j] = w;
      }
   }

   for(i = 0; i <= n-1; i += 1) {
      w = b[i];
kernel_ludcmp_loop_2:      for(j = 0; j <= i-1; j += 1)
         w -= A[i][j]*y[j];
      y[i] = w;
   }

   for(i = n-1; i >= 0; i += -1) {
      w = y[i];
kernel_ludcmp_loop_3:      for(j = i+1; j <= n-1; j += 1)
         w -= A[i][j]*x[j];
      x[i] = w/A[i][i];
   }
#pragma endscop

}
static void kernel_syr2k(int n, int m, double alpha, double beta, double C[1200+0][1200+0], double A[1200+0][1000+0], double B[1200+0][1000+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i; j += 1)
         C[i][j] *= beta;
      for(k = 0; k <= m-1; k += 1)
kernel_syr2k_loop_1:         for(j = 0; j <= i; j += 1)
            C[i][j] += A[j][k]*alpha*B[i][k]+B[j][k]*alpha*A[i][k];
   }
#pragma endscop

}
static void kernel_durbin(int n, double r[2000+0], double y[2000+0])
{
   double z[2000];
   double alpha;
   double beta;
   double sum;

   int i, k;

#pragma scop
   y[0] = -r[0];
   beta = 1.0;
   alpha = -r[0];

   for(k = 1; k <= n-1; k += 1) {
      beta = (1-alpha*alpha)*beta;
      sum = 0.0;
      for(i = 0; i <= k-1; i += 1)
         sum += r[k-i-1]*y[i];
      alpha = -(r[k]+sum)/beta;

      for(i = 0; i <= k-1; i += 1)
         z[i] = y[i]+alpha*y[k-i-1];
kernel_durbin_loop_1:      for(i = 0; i <= k-1; i += 1)
         y[i] = z[i];
      y[k] = alpha;
   }
#pragma endscop

}
static void kernel_gramschmidt(int m, int n, double A[1000+0][1200+0], double R[1200+0][1200+0], double Q[1000+0][1200+0])
{
   int i, j, k;

   double nrm;

#pragma scop
   for(k = 0; k <= n-1; k += 1) {
      nrm = 0.0;
      for(i = 0; i <= m-1; i += 1)
         nrm += A[i][k]*A[i][k];
      R[k][k] = sqrt(nrm);
      for(i = 0; i <= m-1; i += 1)
         Q[i][k] = A[i][k]/R[k][k];
      for(j = k+1; j <= n-1; j += 1) {
         R[k][j] = 0.0;
         for(i = 0; i <= m-1; i += 1)
            R[k][j] += Q[i][k]*A[i][j];
kernel_gramschmidt_loop_1:         for(i = 0; i <= m-1; i += 1)
            A[i][j] = A[i][j]-Q[i][k]*R[k][j];
      }
   }
#pragma endscop

}
static void kernel_trisolv(int n, double L[2000+0][2000+0], double x[2000+0], double b[2000+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      x[i] = b[i];
kernel_trisolv_loop_1:      for(j = 0; j <= i-1; j += 1)
         x[i] -= L[i][j]*x[j];
      x[i] = x[i]/L[i][i];
   }
#pragma endscop

}
static void kernel_cholesky(int n, double A[2000+0][2000+0])
{
   int i, j, k;
   
   
#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i-1; j += 1) {
         for(k = 0; k <= j-1; k += 1)
            A[i][j] -= A[i][k]*A[j][k];
         A[i][j] /= A[j][j];
      }
kernel_cholesky_loop_1:      for(k = 0; k <= i-1; k += 1)
         A[i][i] -= A[i][k]*A[i][k];
      A[i][i] = sqrt(A[i][i]);
   }
#pragma endscop

}
static void kernel_bicg(int m, int n, double A[2100+0][1900+0], double s[1900+0], double q[2100+0], double p[1900+0], double r[2100+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= m-1; i += 1)
      s[i] = 0;
   for(i = 0; i <= n-1; i += 1) {
      q[i] = 0.0;
kernel_bicg_loop_1:      for(j = 0; j <= m-1; j += 1) {
         s[j] = s[j]+r[i]*A[i][j];
         q[i] = q[i]+A[i][j]*p[j];
      }
   }
#pragma endscop

}

typedef char base;
static void kernel_nussinov(int n, base seq[2500+0], int table[2500+0][2500+0])
{
   int i, j, k;

#pragma scop
   for(i = n-1; i >= 0; i += -1)
      for(j = i+1; j <= n-1; j += 1) {
         if (j-1>=0)
            table[i][j] = table[i][j]>=table[i][j-1]?table[i][j]:table[i][j-1];
         if (i+1<n)
            table[i][j] = table[i][j]>=table[i+1][j]?table[i][j]:table[i+1][j];

         if (j-1>=0&&i+1<n)
            if (i<j-1)
               table[i][j] = table[i][j]>=table[i+1][j-1]+(seq[i]+seq[j]==3?1:0)?table[i][j]:table[i+1][j-1]+(seq[i]+seq[j]==3?1:0);
            else
               table[i][j] = table[i][j]>=table[i+1][j-1]?table[i][j]:table[i+1][j-1];

kernel_nussinov_loop_1:         for(k = i+1; k <= j-1; k += 1)
            table[i][j] = table[i][j]>=table[i][k]+table[k+1][j]?table[i][j]:table[i][k]+table[k+1][j];
      }
#pragma endscop

}
static void kernel_gemm(int ni, int nj, int nk, double alpha, double beta, double C[1000+0][1100+0], double A[1000+0][1200+0], double B[1200+0][1100+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= ni-1; i += 1) {
      for(j = 0; j <= nj-1; j += 1)
         C[i][j] *= beta;
      for(k = 0; k <= nk-1; k += 1)
kernel_gemm_loop_1:         for(j = 0; j <= nj-1; j += 1)
            C[i][j] += alpha*A[i][k]*B[k][j];
   }
#pragma endscop

}
static void kernel_deriche(int w, int h, float alpha, float imgIn[4096+0][2160+0], float imgOut[4096+0][2160+0], float y1[4096+0][2160+0], float y2[4096+0][2160+0])
{
   int i, j;
   float xm1, tm1, ym1, ym2;
   float xp1, xp2;
   float tp1, tp2;
   float yp1, yp2;

   float k;
   float a1, a2, a3, a4, a5, a6, a7, a8;
   float b1, b2, c1, c2;

#pragma scop
   k = (1.0f-expf(-alpha))*(1.0f-expf(-alpha))/(1.0f+2.0f*alpha*expf(-alpha)-expf(2.0f*alpha));
   a1 = a5 = k;
   a2 = a6 = k*expf(-alpha)*(alpha-1.0f);
   a3 = a7 = k*expf(-alpha)*(alpha+1.0f);
   a4 = a8 = -k*expf(-2.0f*alpha);
   b1 = powf(2.0f, -alpha);
   b2 = -expf(-2.0f*alpha);
   c1 = c2 = 1;

   for(i = 0; i <= w-1; i += 1) {
      ym1 = 0.0f;
      ym2 = 0.0f;
      xm1 = 0.0f;
kernel_deriche_loop_1:      for(j = 0; j <= h-1; j += 1) {
         y1[i][j] = a1*imgIn[i][j]+a2*xm1+b1*ym1+b2*ym2;
         xm1 = imgIn[i][j];
         ym2 = ym1;
         ym1 = y1[i][j];
      }
   }

   for(i = 0; i <= w-1; i += 1) {
      yp1 = 0.0f;
      yp2 = 0.0f;
      xp1 = 0.0f;
      xp2 = 0.0f;
kernel_deriche_loop_2:      for(j = h-1; j >= 0; j += -1) {
         y2[i][j] = a3*xp1+a4*xp2+b1*yp1+b2*yp2;
         xp2 = xp1;
         xp1 = imgIn[i][j];
         yp2 = yp1;
         yp1 = y2[i][j];
      }
   }

   for(i = 0; i <= w-1; i += 1)
kernel_deriche_loop_3:      for(j = 0; j <= h-1; j += 1)
         imgOut[i][j] = c1*(y1[i][j]+y2[i][j]);

   for(j = 0; j <= h-1; j += 1) {
      tm1 = 0.0f;
      ym1 = 0.0f;
      ym2 = 0.0f;
kernel_deriche_loop_4:      for(i = 0; i <= w-1; i += 1) {
         y1[i][j] = a5*imgOut[i][j]+a6*tm1+b1*ym1+b2*ym2;
         tm1 = imgOut[i][j];
         ym2 = ym1;
         ym1 = y1[i][j];
      }
   }
   
   
   for(j = 0; j <= h-1; j += 1) {
      tp1 = 0.0f;
      tp2 = 0.0f;
      yp1 = 0.0f;
      yp2 = 0.0f;
kernel_deriche_loop_5:      for(i = w-1; i >= 0; i += -1) {
         y2[i][j] = a7*tp1+a8*tp2+b1*yp1+b2*yp2;
         tp2 = tp1;
         tp1 = imgOut[i][j];
         yp2 = yp1;
         yp1 = y2[i][j];
      }
   }

   for(i = 0; i <= w-1; i += 1)
kernel_deriche_loop_6:      for(j = 0; j <= h-1; j += 1)
         imgOut[i][j] = c2*(y1[i][j]+y2[i][j]);
#pragma endscop

}
static void kernel_lu(int n, double A[2000+0][2000+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i-1; j += 1) {
         for(k = 0; k <= j-1; k += 1)
            A[i][j] -= A[i][k]*A[k][j];
         A[i][j] /= A[j][j];
      }
      for(j = i; j <= n-1; j += 1)
kernel_lu_loop_1:         for(k = 0; k <= i-1; k += 1)
            A[i][j] -= A[i][k]*A[k][j];
   }
#pragma endscop

}

static void kernel_syrk(int n, int m, double alpha, double beta, double C[1200+0][1200+0], double A[1200+0][1000+0])
{
   int i, j, k;
   

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      for(j = 0; j <= i; j += 1)
         C[i][j] *= beta;
      for(k = 0; k <= m-1; k += 1)
kernel_syrk_loop_1:         for(j = 0; j <= i; j += 1)
            C[i][j] += alpha*A[i][k]*A[j][k];
   }
#pragma endscop

}
static void kernel_symm(int m, int n, double alpha, double beta, double C[1000+0][1200+0], double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j, k;
   double temp2;
   

#pragma scop
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
         temp2 = 0;
kernel_symm_loop_1:         for(k = 0; k <= i-1; k += 1) {
            C[k][j] += alpha*B[i][j]*A[i][k];
            temp2 += B[k][j]*A[i][k];
         }
         C[i][j] = beta*C[i][j]+alpha*B[i][j]*A[i][i]+alpha*temp2;
      }
#pragma endscop

}
static void kernel_atax(int m, int n, double A[1900+0][2100+0], double x[2100+0], double y[2100+0], double tmp[1900+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1)
      y[i] = 0;
   for(i = 0; i <= m-1; i += 1) {
      tmp[i] = 0.0;
      for(j = 0; j <= n-1; j += 1)
         tmp[i] = tmp[i]+A[i][j]*x[j];
kernel_atax_loop_1:      for(j = 0; j <= n-1; j += 1)
         y[j] = y[j]+A[i][j]*tmp[i];
   }
#pragma endscop

}
static void kernel_gesummv(int n, double alpha, double beta, double A[1300+0][1300+0], double B[1300+0][1300+0], double tmp[1300+0], double x[1300+0], double y[1300+0])
{
   int i, j;

#pragma scop
   for(i = 0; i <= n-1; i += 1) {
      tmp[i] = 0.0;
      y[i] = 0.0;
kernel_gesummv_loop_1:      for(j = 0; j <= n-1; j += 1) {
         tmp[i] = A[i][j]*x[j]+tmp[i];
         y[i] = B[i][j]*x[j]+y[i];
      }
      y[i] = alpha*tmp[i]+beta*y[i];
   }
#pragma endscop

}
static void kernel_trmm(int m, int n, double alpha, double A[1000+0][1000+0], double B[1000+0][1200+0])
{
   int i, j, k;

#pragma scop
   for(i = 0; i <= m-1; i += 1)
      for(j = 0; j <= n-1; j += 1) {
kernel_trmm_loop_1:         for(k = i+1; k <= m-1; k += 1)
            B[i][j] += A[k][i]*B[k][j];
         B[i][j] = alpha*B[i][j];
      }
#pragma endscop

}

void kernel_doitgen(int nr, int nq, int np, double A[150+0][140+0][160+0], double C4[160+0][160+0], double sum[160+0])
{
   int r, q, p, s;

#pragma scop
   for(r = 0; r <= nr-1; r += 1)
      for(q = 0; q <= nq-1; q += 1) {
         for(p = 0; p <= np-1; p += 1) {
            sum[p] = 0.0;
            for(s = 0; s <= np-1; s += 1)
               sum[p] += A[r][q][s]*C4[s][p];
         }
kernel_doitgen_loop_1:         for(p = 0; p <= np-1; p += 1)
            A[r][q][p] = sum[p];
      }
#pragma endscop

}

static void kernel_seidel_2d(int tsteps, int n, double A[2000+0][2000+0])
{
   int t, i, j;

#pragma scop
   for(t = 0; t <= tsteps-1; t += 1)
      for(i = 1; i <= n-2; i += 1)
kernel_seidel_2d_loop_1:         for(j = 1; j <= n-2; j += 1)
            A[i][j] = (A[i-1][j-1]+A[i-1][j]+A[i-1][j+1]+A[i][j-1]+A[i][j]+A[i][j+1]+A[i+1][j-1]+A[i+1][j]+A[i+1][j+1])/9.0;
#pragma endscop

}

static void kernel_jacobi_1d(int tsteps, int n, double A[2000+0], double B[2000+0])
{
   int t, i;

#pragma scop
   for(t = 0; t <= tsteps-1; t += 1) {
      for(i = 1; i <= n-1-1; i += 1)
         B[i] = 0.33333*(A[i-1]+A[i]+A[i+1]);
kernel_jacobi_1d_loop_1:      for(i = 1; i <= n-1-1; i += 1)
         A[i] = 0.33333*(B[i-1]+B[i]+B[i+1]);
   }
#pragma endscop

}

static void kernel_jacobi_2d(int tsteps, int n, double A[1300+0][1300+0], double B[1300+0][1300+0])
{
   int t, i, j;

#pragma scop
   for(t = 0; t <= tsteps-1; t += 1) {
      for(i = 1; i <= n-1-1; i += 1)
         for(j = 1; j <= n-1-1; j += 1)
            B[i][j] = 0.2*(A[i][j]+A[i][j-1]+A[i][1+j]+A[1+i][j]+A[i-1][j]);
      for(i = 1; i <= n-1-1; i += 1)
kernel_jacobi_2d_loop_1:         for(j = 1; j <= n-1-1; j += 1)
            A[i][j] = 0.2*(B[i][j]+B[i][j-1]+B[i][1+j]+B[1+i][j]+B[i-1][j]);
   }
#pragma endscop

}

static void kernel_fdtd_2d(int tmax, int nx, int ny, double ex[1000+0][1200+0], double ey[1000+0][1200+0], double hz[1000+0][1200+0], double _fict_[500+0])
{
   int t, i, j;

#pragma scop
   for(t = 0; t <= tmax-1; t += 1) {
      for(j = 0; j <= ny-1; j += 1)
         ey[0][j] = _fict_[t];
      for(i = 1; i <= nx-1; i += 1)
         for(j = 0; j <= ny-1; j += 1)
            ey[i][j] = ey[i][j]-0.5*(hz[i][j]-hz[i-1][j]);
      for(i = 0; i <= nx-1; i += 1)
         for(j = 1; j <= ny-1; j += 1)
            ex[i][j] = ex[i][j]-0.5*(hz[i][j]-hz[i][j-1]);
      for(i = 0; i <= nx-1-1; i += 1)
kernel_fdtd_2d_loop_1:         for(j = 0; j <= ny-1-1; j += 1)
            hz[i][j] = hz[i][j]-0.7*(ex[i][j+1]-ex[i][j]+ey[i+1][j]-ey[i][j]);
   }
#pragma endscop

}

static void kernel_floyd_warshall(int n, int path[2800+0][2800+0])
{
   int i, j, k;

#pragma scop
   for(k = 0; k <= n-1; k += 1)
      for(i = 0; i <= n-1; i += 1)
kernel_floyd_warshall_loop_1:        for(j = 0; j <= n-1; j += 1)
            path[i][j] = path[i][j]<path[i][k]+path[k][j]?path[i][j]:path[i][k]+path[k][j];
#pragma endscop

}

static void kernel_heat_3d(int tsteps, int n, double A[120+0][120+0][120+0], double B[120+0][120+0][120+0])
{
   int t, i, j, k;

#pragma scop
   for(t = 1; t <= 500; t += 1) {
      for(i = 1; i <= n-1-1; i += 1)
         for(j = 1; j <= n-1-1; j += 1)
kernel_heat_3d_loop_1:            for(k = 1; k <= n-1-1; k += 1)
               B[i][j][k] = 0.125*(A[i+1][j][k]-2.0*A[i][j][k]+A[i-1][j][k])+0.125*(A[i][j+1][k]-2.0*A[i][j][k]+A[i][j-1][k])+0.125*(A[i][j][k+1]-2.0*A[i][j][k]+A[i][j][k-1])+A[i][j][k];
      for(i = 1; i <= n-1-1; i += 1)
kernel_heat_3d_loop_2:         for(j = 1; j <= n-1-1; j += 1)
      A[i][j][k] = 0.125*(B[i+1][j][k]-2.0*B[i][j][k]+B[i-1][j][k])+0.125*(B[i][j+1][k]-2.0*B[i][j][k]+B[i][j-1][k])+0.125*(B[i][j][k+1]-2.0*B[i][j][k]+B[i][j][k-1])+B[i][j][k];
   }
#pragma endscop

}
