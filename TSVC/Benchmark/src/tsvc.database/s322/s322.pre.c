real_t s322(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    recurrences
   //    second order linear recurrence
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 49999; nl += 1) {
         {
            int i;
loop_s322:            LU_NUB0 = 31998;
            LU_IB0 = 6;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*1+2] = a[LU_IND0*1+2]+a[LU_IND0*1+2-1]*b[LU_IND0*1+2]+a[LU_IND0*1+2-2]*c[LU_IND0*1+2];
l99803:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*1+2] = a[(LU_IND0+0)*1+2]+a[(LU_IND0+0)*1+2-1]*b[(LU_IND0+0)*1+2]+a[(LU_IND0+0)*1+2-2]*c[(LU_IND0+0)*1+2];
               a[(LU_IND0+1)*1+2] = a[(LU_IND0+1)*1+2]+a[(LU_IND0+1)*1+2-1]*b[(LU_IND0+1)*1+2]+a[(LU_IND0+1)*1+2-2]*c[(LU_IND0+1)*1+2];
               a[(LU_IND0+2)*1+2] = a[(LU_IND0+2)*1+2]+a[(LU_IND0+2)*1+2-1]*b[(LU_IND0+2)*1+2]+a[(LU_IND0+2)*1+2-2]*c[(LU_IND0+2)*1+2];
               a[(LU_IND0+3)*1+2] = a[(LU_IND0+3)*1+2]+a[(LU_IND0+3)*1+2-1]*b[(LU_IND0+3)*1+2]+a[(LU_IND0+3)*1+2-2]*c[(LU_IND0+3)*1+2];
               a[(LU_IND0+4)*1+2] = a[(LU_IND0+4)*1+2]+a[(LU_IND0+4)*1+2-1]*b[(LU_IND0+4)*1+2]+a[(LU_IND0+4)*1+2-2]*c[(LU_IND0+4)*1+2];
               a[(LU_IND0+5)*1+2] = a[(LU_IND0+5)*1+2]+a[(LU_IND0+5)*1+2-1]*b[(LU_IND0+5)*1+2]+a[(LU_IND0+5)*1+2-2]*c[(LU_IND0+5)*1+2];
               a[(LU_IND0+6)*1+2] = a[(LU_IND0+6)*1+2]+a[(LU_IND0+6)*1+2-1]*b[(LU_IND0+6)*1+2]+a[(LU_IND0+6)*1+2-2]*c[(LU_IND0+6)*1+2];
               a[(LU_IND0+7)*1+2] = a[(LU_IND0+7)*1+2]+a[(LU_IND0+7)*1+2-1]*b[(LU_IND0+7)*1+2]+a[(LU_IND0+7)*1+2-2]*c[(LU_IND0+7)*1+2];
l99802:               ;
            }
            i = 2+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
