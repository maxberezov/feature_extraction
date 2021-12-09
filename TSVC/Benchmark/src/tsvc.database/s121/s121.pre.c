real_t s121(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    induction variable recognition
   //    loop with possible ambiguity because of scalar store
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j;
   {
      int nl;
      for(nl = 0; nl <= 299999; nl += 1) {
         {
            int i;
loop_s121:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               j = LU_IND0*1+0+1;
               a[LU_IND0*1+0] = a[j]+b[LU_IND0*1+0];
l99971:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               j = (LU_IND0+0)*1+0+1;
               a[(LU_IND0+0)*1+0] = a[j]+b[(LU_IND0+0)*1+0];
               j = (LU_IND0+1)*1+0+1;
               a[(LU_IND0+1)*1+0] = a[j]+b[(LU_IND0+1)*1+0];
               j = (LU_IND0+2)*1+0+1;
               a[(LU_IND0+2)*1+0] = a[j]+b[(LU_IND0+2)*1+0];
               j = (LU_IND0+3)*1+0+1;
               a[(LU_IND0+3)*1+0] = a[j]+b[(LU_IND0+3)*1+0];
               j = (LU_IND0+4)*1+0+1;
               a[(LU_IND0+4)*1+0] = a[j]+b[(LU_IND0+4)*1+0];
               j = (LU_IND0+5)*1+0+1;
               a[(LU_IND0+5)*1+0] = a[j]+b[(LU_IND0+5)*1+0];
               j = (LU_IND0+6)*1+0+1;
               a[(LU_IND0+6)*1+0] = a[j]+b[(LU_IND0+6)*1+0];
               j = (LU_IND0+7)*1+0+1;
               a[(LU_IND0+7)*1+0] = a[j]+b[(LU_IND0+7)*1+0];
l99970:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
