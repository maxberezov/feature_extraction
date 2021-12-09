real_t s261(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    scalar and array expansion
   //    wrap-around scalar under an if
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t t;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s261:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               t = a[LU_IND0*1+1]+b[LU_IND0*1+1];
               a[LU_IND0*1+1] = t+c[LU_IND0*1+1-1];
               t = c[LU_IND0*1+1]*d[LU_IND0*1+1];
               c[LU_IND0*1+1] = t;
l99873:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               t = a[(LU_IND0+0)*1+1]+b[(LU_IND0+0)*1+1];
               a[(LU_IND0+0)*1+1] = t+c[(LU_IND0+0)*1+1-1];
               t = c[(LU_IND0+0)*1+1]*d[(LU_IND0+0)*1+1];
               c[(LU_IND0+0)*1+1] = t;
               t = a[(LU_IND0+1)*1+1]+b[(LU_IND0+1)*1+1];
               a[(LU_IND0+1)*1+1] = t+c[(LU_IND0+1)*1+1-1];
               t = c[(LU_IND0+1)*1+1]*d[(LU_IND0+1)*1+1];
               c[(LU_IND0+1)*1+1] = t;
               t = a[(LU_IND0+2)*1+1]+b[(LU_IND0+2)*1+1];
               a[(LU_IND0+2)*1+1] = t+c[(LU_IND0+2)*1+1-1];
               t = c[(LU_IND0+2)*1+1]*d[(LU_IND0+2)*1+1];
               c[(LU_IND0+2)*1+1] = t;
               t = a[(LU_IND0+3)*1+1]+b[(LU_IND0+3)*1+1];
               a[(LU_IND0+3)*1+1] = t+c[(LU_IND0+3)*1+1-1];
               t = c[(LU_IND0+3)*1+1]*d[(LU_IND0+3)*1+1];
               c[(LU_IND0+3)*1+1] = t;
               t = a[(LU_IND0+4)*1+1]+b[(LU_IND0+4)*1+1];
               a[(LU_IND0+4)*1+1] = t+c[(LU_IND0+4)*1+1-1];
               t = c[(LU_IND0+4)*1+1]*d[(LU_IND0+4)*1+1];
               c[(LU_IND0+4)*1+1] = t;
               t = a[(LU_IND0+5)*1+1]+b[(LU_IND0+5)*1+1];
               a[(LU_IND0+5)*1+1] = t+c[(LU_IND0+5)*1+1-1];
               t = c[(LU_IND0+5)*1+1]*d[(LU_IND0+5)*1+1];
               c[(LU_IND0+5)*1+1] = t;
               t = a[(LU_IND0+6)*1+1]+b[(LU_IND0+6)*1+1];
               a[(LU_IND0+6)*1+1] = t+c[(LU_IND0+6)*1+1-1];
               t = c[(LU_IND0+6)*1+1]*d[(LU_IND0+6)*1+1];
               c[(LU_IND0+6)*1+1] = t;
               t = a[(LU_IND0+7)*1+1]+b[(LU_IND0+7)*1+1];
               a[(LU_IND0+7)*1+1] = t+c[(LU_IND0+7)*1+1-1];
               t = c[(LU_IND0+7)*1+1]*d[(LU_IND0+7)*1+1];
               c[(LU_IND0+7)*1+1] = t;
l99872:               ;
            }
            i = 1+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
