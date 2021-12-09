real_t s116(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    linear dependence testing
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_s116:            LU_NUB0 = 6399;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*5+0] = a[LU_IND0*5+0+1]*a[LU_IND0*5+0];
               a[LU_IND0*5+0+1] = a[LU_IND0*5+0+2]*a[LU_IND0*5+0+1];
               a[LU_IND0*5+0+2] = a[LU_IND0*5+0+3]*a[LU_IND0*5+0+2];
               a[LU_IND0*5+0+3] = a[LU_IND0*5+0+4]*a[LU_IND0*5+0+3];
               a[LU_IND0*5+0+4] = a[LU_IND0*5+0+5]*a[LU_IND0*5+0+4];
l99979:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*5+0] = a[(LU_IND0+0)*5+0+1]*a[(LU_IND0+0)*5+0];
               a[(LU_IND0+0)*5+0+1] = a[(LU_IND0+0)*5+0+2]*a[(LU_IND0+0)*5+0+1];
               a[(LU_IND0+0)*5+0+2] = a[(LU_IND0+0)*5+0+3]*a[(LU_IND0+0)*5+0+2];
               a[(LU_IND0+0)*5+0+3] = a[(LU_IND0+0)*5+0+4]*a[(LU_IND0+0)*5+0+3];
               a[(LU_IND0+0)*5+0+4] = a[(LU_IND0+0)*5+0+5]*a[(LU_IND0+0)*5+0+4];
               a[(LU_IND0+1)*5+0] = a[(LU_IND0+1)*5+0+1]*a[(LU_IND0+1)*5+0];
               a[(LU_IND0+1)*5+0+1] = a[(LU_IND0+1)*5+0+2]*a[(LU_IND0+1)*5+0+1];
               a[(LU_IND0+1)*5+0+2] = a[(LU_IND0+1)*5+0+3]*a[(LU_IND0+1)*5+0+2];
               a[(LU_IND0+1)*5+0+3] = a[(LU_IND0+1)*5+0+4]*a[(LU_IND0+1)*5+0+3];
               a[(LU_IND0+1)*5+0+4] = a[(LU_IND0+1)*5+0+5]*a[(LU_IND0+1)*5+0+4];
               a[(LU_IND0+2)*5+0] = a[(LU_IND0+2)*5+0+1]*a[(LU_IND0+2)*5+0];
               a[(LU_IND0+2)*5+0+1] = a[(LU_IND0+2)*5+0+2]*a[(LU_IND0+2)*5+0+1];
               a[(LU_IND0+2)*5+0+2] = a[(LU_IND0+2)*5+0+3]*a[(LU_IND0+2)*5+0+2];
               a[(LU_IND0+2)*5+0+3] = a[(LU_IND0+2)*5+0+4]*a[(LU_IND0+2)*5+0+3];
               a[(LU_IND0+2)*5+0+4] = a[(LU_IND0+2)*5+0+5]*a[(LU_IND0+2)*5+0+4];
               a[(LU_IND0+3)*5+0] = a[(LU_IND0+3)*5+0+1]*a[(LU_IND0+3)*5+0];
               a[(LU_IND0+3)*5+0+1] = a[(LU_IND0+3)*5+0+2]*a[(LU_IND0+3)*5+0+1];
               a[(LU_IND0+3)*5+0+2] = a[(LU_IND0+3)*5+0+3]*a[(LU_IND0+3)*5+0+2];
               a[(LU_IND0+3)*5+0+3] = a[(LU_IND0+3)*5+0+4]*a[(LU_IND0+3)*5+0+3];
               a[(LU_IND0+3)*5+0+4] = a[(LU_IND0+3)*5+0+5]*a[(LU_IND0+3)*5+0+4];
               a[(LU_IND0+4)*5+0] = a[(LU_IND0+4)*5+0+1]*a[(LU_IND0+4)*5+0];
               a[(LU_IND0+4)*5+0+1] = a[(LU_IND0+4)*5+0+2]*a[(LU_IND0+4)*5+0+1];
               a[(LU_IND0+4)*5+0+2] = a[(LU_IND0+4)*5+0+3]*a[(LU_IND0+4)*5+0+2];
               a[(LU_IND0+4)*5+0+3] = a[(LU_IND0+4)*5+0+4]*a[(LU_IND0+4)*5+0+3];
               a[(LU_IND0+4)*5+0+4] = a[(LU_IND0+4)*5+0+5]*a[(LU_IND0+4)*5+0+4];
               a[(LU_IND0+5)*5+0] = a[(LU_IND0+5)*5+0+1]*a[(LU_IND0+5)*5+0];
               a[(LU_IND0+5)*5+0+1] = a[(LU_IND0+5)*5+0+2]*a[(LU_IND0+5)*5+0+1];
               a[(LU_IND0+5)*5+0+2] = a[(LU_IND0+5)*5+0+3]*a[(LU_IND0+5)*5+0+2];
               a[(LU_IND0+5)*5+0+3] = a[(LU_IND0+5)*5+0+4]*a[(LU_IND0+5)*5+0+3];
               a[(LU_IND0+5)*5+0+4] = a[(LU_IND0+5)*5+0+5]*a[(LU_IND0+5)*5+0+4];
               a[(LU_IND0+6)*5+0] = a[(LU_IND0+6)*5+0+1]*a[(LU_IND0+6)*5+0];
               a[(LU_IND0+6)*5+0+1] = a[(LU_IND0+6)*5+0+2]*a[(LU_IND0+6)*5+0+1];
               a[(LU_IND0+6)*5+0+2] = a[(LU_IND0+6)*5+0+3]*a[(LU_IND0+6)*5+0+2];
               a[(LU_IND0+6)*5+0+3] = a[(LU_IND0+6)*5+0+4]*a[(LU_IND0+6)*5+0+3];
               a[(LU_IND0+6)*5+0+4] = a[(LU_IND0+6)*5+0+5]*a[(LU_IND0+6)*5+0+4];
               a[(LU_IND0+7)*5+0] = a[(LU_IND0+7)*5+0+1]*a[(LU_IND0+7)*5+0];
               a[(LU_IND0+7)*5+0+1] = a[(LU_IND0+7)*5+0+2]*a[(LU_IND0+7)*5+0+1];
               a[(LU_IND0+7)*5+0+2] = a[(LU_IND0+7)*5+0+3]*a[(LU_IND0+7)*5+0+2];
               a[(LU_IND0+7)*5+0+3] = a[(LU_IND0+7)*5+0+4]*a[(LU_IND0+7)*5+0+3];
               a[(LU_IND0+7)*5+0+4] = a[(LU_IND0+7)*5+0+5]*a[(LU_IND0+7)*5+0+4];
l99978:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*5;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
