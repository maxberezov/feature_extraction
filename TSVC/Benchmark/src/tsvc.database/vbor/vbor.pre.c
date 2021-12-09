real_t vbor(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    control loops
   //    basic operations rates, isolate arithmetic from memory traffic
   //    all combinations of three, 59 flops for 6 loads and 1 store.
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t a1, b1, c1, d1, e1, f1;
   {
      int nl;
      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_vbor:            LU_NUB0 = 256;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a1 = a[LU_IND0*1+0];
               b1 = b[LU_IND0*1+0];
               c1 = c[LU_IND0*1+0];
               d1 = d[LU_IND0*1+0];
               e1 = e[LU_IND0*1+0];
               f1 = aa[0][LU_IND0*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[LU_IND0*1+0] = a1*b1*c1*d1;
l99719:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a1 = a[(LU_IND0+0)*1+0];
               b1 = b[(LU_IND0+0)*1+0];
               c1 = c[(LU_IND0+0)*1+0];
               d1 = d[(LU_IND0+0)*1+0];
               e1 = e[(LU_IND0+0)*1+0];
               f1 = aa[0][(LU_IND0+0)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+0)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+1)*1+0];
               b1 = b[(LU_IND0+1)*1+0];
               c1 = c[(LU_IND0+1)*1+0];
               d1 = d[(LU_IND0+1)*1+0];
               e1 = e[(LU_IND0+1)*1+0];
               f1 = aa[0][(LU_IND0+1)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+1)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+2)*1+0];
               b1 = b[(LU_IND0+2)*1+0];
               c1 = c[(LU_IND0+2)*1+0];
               d1 = d[(LU_IND0+2)*1+0];
               e1 = e[(LU_IND0+2)*1+0];
               f1 = aa[0][(LU_IND0+2)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+2)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+3)*1+0];
               b1 = b[(LU_IND0+3)*1+0];
               c1 = c[(LU_IND0+3)*1+0];
               d1 = d[(LU_IND0+3)*1+0];
               e1 = e[(LU_IND0+3)*1+0];
               f1 = aa[0][(LU_IND0+3)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+3)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+4)*1+0];
               b1 = b[(LU_IND0+4)*1+0];
               c1 = c[(LU_IND0+4)*1+0];
               d1 = d[(LU_IND0+4)*1+0];
               e1 = e[(LU_IND0+4)*1+0];
               f1 = aa[0][(LU_IND0+4)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+4)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+5)*1+0];
               b1 = b[(LU_IND0+5)*1+0];
               c1 = c[(LU_IND0+5)*1+0];
               d1 = d[(LU_IND0+5)*1+0];
               e1 = e[(LU_IND0+5)*1+0];
               f1 = aa[0][(LU_IND0+5)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+5)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+6)*1+0];
               b1 = b[(LU_IND0+6)*1+0];
               c1 = c[(LU_IND0+6)*1+0];
               d1 = d[(LU_IND0+6)*1+0];
               e1 = e[(LU_IND0+6)*1+0];
               f1 = aa[0][(LU_IND0+6)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+6)*1+0] = a1*b1*c1*d1;
               a1 = a[(LU_IND0+7)*1+0];
               b1 = b[(LU_IND0+7)*1+0];
               c1 = c[(LU_IND0+7)*1+0];
               d1 = d[(LU_IND0+7)*1+0];
               e1 = e[(LU_IND0+7)*1+0];
               f1 = aa[0][(LU_IND0+7)*1+0];
               a1 = a1*b1*c1+a1*b1*d1+a1*b1*e1+a1*b1*f1+a1*c1*d1+a1*c1*e1+a1*c1*f1+a1*d1*e1+a1*d1*f1+a1*e1*f1;
               b1 = b1*c1*d1+b1*c1*e1+b1*c1*f1+b1*d1*e1+b1*d1*f1+b1*e1*f1;
               c1 = c1*d1*e1+c1*d1*f1+c1*e1*f1;
               d1 = d1*e1*f1;
               x[(LU_IND0+7)*1+0] = a1*b1*c1*d1;
l99718:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
