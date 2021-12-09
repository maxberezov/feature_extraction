real_t s331(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    search loops
   //    if to last-1
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j;
   real_t chksum;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         j = -1;
         {
            int i;
loop_s331:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (a[LU_IND0*1+0]<(real_t) 0.)
                  j = LU_IND0*1+0;
l99799:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (a[(LU_IND0+0)*1+0]<(real_t) 0.)
                  j = (LU_IND0+0)*1+0;
               if (a[(LU_IND0+1)*1+0]<(real_t) 0.)
                  j = (LU_IND0+1)*1+0;
               if (a[(LU_IND0+2)*1+0]<(real_t) 0.)
                  j = (LU_IND0+2)*1+0;
               if (a[(LU_IND0+3)*1+0]<(real_t) 0.)
                  j = (LU_IND0+3)*1+0;
               if (a[(LU_IND0+4)*1+0]<(real_t) 0.)
                  j = (LU_IND0+4)*1+0;
               if (a[(LU_IND0+5)*1+0]<(real_t) 0.)
                  j = (LU_IND0+5)*1+0;
               if (a[(LU_IND0+6)*1+0]<(real_t) 0.)
                  j = (LU_IND0+6)*1+0;
               if (a[(LU_IND0+7)*1+0]<(real_t) 0.)
                  j = (LU_IND0+7)*1+0;
l99798:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         chksum = (real_t) j;
         dummy(a, b, c, d, e, aa, bb, cc, chksum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return j+1;
}
