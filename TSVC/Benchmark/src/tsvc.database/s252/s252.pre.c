real_t s252(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    scalar and array expansion
   //    loop with ambiguous scalar temporary
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t t, s;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         t = (real_t) 0.;
         {
            int i;
loop_s252:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               s = b[LU_IND0*1+0]*c[LU_IND0*1+0];
               a[LU_IND0*1+0] = s+t;
               t = s;
l99887:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               s = b[(LU_IND0+0)*1+0]*c[(LU_IND0+0)*1+0];
               a[(LU_IND0+0)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+1)*1+0]*c[(LU_IND0+1)*1+0];
               a[(LU_IND0+1)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+2)*1+0]*c[(LU_IND0+2)*1+0];
               a[(LU_IND0+2)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+3)*1+0]*c[(LU_IND0+3)*1+0];
               a[(LU_IND0+3)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+4)*1+0]*c[(LU_IND0+4)*1+0];
               a[(LU_IND0+4)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+5)*1+0]*c[(LU_IND0+5)*1+0];
               a[(LU_IND0+5)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+6)*1+0]*c[(LU_IND0+6)*1+0];
               a[(LU_IND0+6)*1+0] = s+t;
               t = s;
               s = b[(LU_IND0+7)*1+0]*c[(LU_IND0+7)*1+0];
               a[(LU_IND0+7)*1+0] = s+t;
               t = s;
l99886:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
