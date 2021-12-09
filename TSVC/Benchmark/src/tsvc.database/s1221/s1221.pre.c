real_t s1221(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    run-time symbolic resolution
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s1221:            LU_NUB0 = 31996;
            LU_IB0 = 4;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               b[LU_IND0*1+4] = b[LU_IND0*1+4-4]+a[LU_IND0*1+4];
l99923:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               b[(LU_IND0+0)*1+4] = b[(LU_IND0+0)*1+4-4]+a[(LU_IND0+0)*1+4];
               b[(LU_IND0+1)*1+4] = b[(LU_IND0+1)*1+4-4]+a[(LU_IND0+1)*1+4];
               b[(LU_IND0+2)*1+4] = b[(LU_IND0+2)*1+4-4]+a[(LU_IND0+2)*1+4];
               b[(LU_IND0+3)*1+4] = b[(LU_IND0+3)*1+4-4]+a[(LU_IND0+3)*1+4];
               b[(LU_IND0+4)*1+4] = b[(LU_IND0+4)*1+4-4]+a[(LU_IND0+4)*1+4];
               b[(LU_IND0+5)*1+4] = b[(LU_IND0+5)*1+4-4]+a[(LU_IND0+5)*1+4];
               b[(LU_IND0+6)*1+4] = b[(LU_IND0+6)*1+4-4]+a[(LU_IND0+6)*1+4];
               b[(LU_IND0+7)*1+4] = b[(LU_IND0+7)*1+4-4]+a[(LU_IND0+7)*1+4];
l99922:               ;
            }
            i = 4+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
