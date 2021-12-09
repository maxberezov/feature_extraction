real_t s244(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    node splitting
   //    false dependence cycle breaking
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s244:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*1+0] = b[LU_IND0*1+0]+c[LU_IND0*1+0]*d[LU_IND0*1+0];
               b[LU_IND0*1+0] = c[LU_IND0*1+0]+b[LU_IND0*1+0];
               a[LU_IND0*1+0+1] = b[LU_IND0*1+0]+a[LU_IND0*1+0+1]*d[LU_IND0*1+0];
l99901:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*1+0] = b[(LU_IND0+0)*1+0]+c[(LU_IND0+0)*1+0]*d[(LU_IND0+0)*1+0];
               b[(LU_IND0+0)*1+0] = c[(LU_IND0+0)*1+0]+b[(LU_IND0+0)*1+0];
               a[(LU_IND0+0)*1+0+1] = b[(LU_IND0+0)*1+0]+a[(LU_IND0+0)*1+0+1]*d[(LU_IND0+0)*1+0];
               a[(LU_IND0+1)*1+0] = b[(LU_IND0+1)*1+0]+c[(LU_IND0+1)*1+0]*d[(LU_IND0+1)*1+0];
               b[(LU_IND0+1)*1+0] = c[(LU_IND0+1)*1+0]+b[(LU_IND0+1)*1+0];
               a[(LU_IND0+1)*1+0+1] = b[(LU_IND0+1)*1+0]+a[(LU_IND0+1)*1+0+1]*d[(LU_IND0+1)*1+0];
               a[(LU_IND0+2)*1+0] = b[(LU_IND0+2)*1+0]+c[(LU_IND0+2)*1+0]*d[(LU_IND0+2)*1+0];
               b[(LU_IND0+2)*1+0] = c[(LU_IND0+2)*1+0]+b[(LU_IND0+2)*1+0];
               a[(LU_IND0+2)*1+0+1] = b[(LU_IND0+2)*1+0]+a[(LU_IND0+2)*1+0+1]*d[(LU_IND0+2)*1+0];
               a[(LU_IND0+3)*1+0] = b[(LU_IND0+3)*1+0]+c[(LU_IND0+3)*1+0]*d[(LU_IND0+3)*1+0];
               b[(LU_IND0+3)*1+0] = c[(LU_IND0+3)*1+0]+b[(LU_IND0+3)*1+0];
               a[(LU_IND0+3)*1+0+1] = b[(LU_IND0+3)*1+0]+a[(LU_IND0+3)*1+0+1]*d[(LU_IND0+3)*1+0];
               a[(LU_IND0+4)*1+0] = b[(LU_IND0+4)*1+0]+c[(LU_IND0+4)*1+0]*d[(LU_IND0+4)*1+0];
               b[(LU_IND0+4)*1+0] = c[(LU_IND0+4)*1+0]+b[(LU_IND0+4)*1+0];
               a[(LU_IND0+4)*1+0+1] = b[(LU_IND0+4)*1+0]+a[(LU_IND0+4)*1+0+1]*d[(LU_IND0+4)*1+0];
               a[(LU_IND0+5)*1+0] = b[(LU_IND0+5)*1+0]+c[(LU_IND0+5)*1+0]*d[(LU_IND0+5)*1+0];
               b[(LU_IND0+5)*1+0] = c[(LU_IND0+5)*1+0]+b[(LU_IND0+5)*1+0];
               a[(LU_IND0+5)*1+0+1] = b[(LU_IND0+5)*1+0]+a[(LU_IND0+5)*1+0+1]*d[(LU_IND0+5)*1+0];
               a[(LU_IND0+6)*1+0] = b[(LU_IND0+6)*1+0]+c[(LU_IND0+6)*1+0]*d[(LU_IND0+6)*1+0];
               b[(LU_IND0+6)*1+0] = c[(LU_IND0+6)*1+0]+b[(LU_IND0+6)*1+0];
               a[(LU_IND0+6)*1+0+1] = b[(LU_IND0+6)*1+0]+a[(LU_IND0+6)*1+0+1]*d[(LU_IND0+6)*1+0];
               a[(LU_IND0+7)*1+0] = b[(LU_IND0+7)*1+0]+c[(LU_IND0+7)*1+0]*d[(LU_IND0+7)*1+0];
               b[(LU_IND0+7)*1+0] = c[(LU_IND0+7)*1+0]+b[(LU_IND0+7)*1+0];
               a[(LU_IND0+7)*1+0+1] = b[(LU_IND0+7)*1+0]+a[(LU_IND0+7)*1+0+1]*d[(LU_IND0+7)*1+0];
l99900:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
