real_t s315(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    if to max with index reductio 1 dimension
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int i;

      for(i = 0; i <= 31999; i += 1)
         a[i] = i*7%32000;
   }

   real_t x, chksum;
   int index;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         x = a[0];
         index = 0;
         {
            int i;
loop_s315:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               if (a[LU_IND0*1+0]>x) {
                  x = a[LU_IND0*1+0];
                  index = LU_IND0*1+0;
               }
l99823:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               if (a[(LU_IND0+0)*1+0]>x) {
                  x = a[(LU_IND0+0)*1+0];
                  index = (LU_IND0+0)*1+0;
               }
               if (a[(LU_IND0+1)*1+0]>x) {
                  x = a[(LU_IND0+1)*1+0];
                  index = (LU_IND0+1)*1+0;
               }
               if (a[(LU_IND0+2)*1+0]>x) {
                  x = a[(LU_IND0+2)*1+0];
                  index = (LU_IND0+2)*1+0;
               }
               if (a[(LU_IND0+3)*1+0]>x) {
                  x = a[(LU_IND0+3)*1+0];
                  index = (LU_IND0+3)*1+0;
               }
               if (a[(LU_IND0+4)*1+0]>x) {
                  x = a[(LU_IND0+4)*1+0];
                  index = (LU_IND0+4)*1+0;
               }
               if (a[(LU_IND0+5)*1+0]>x) {
                  x = a[(LU_IND0+5)*1+0];
                  index = (LU_IND0+5)*1+0;
               }
               if (a[(LU_IND0+6)*1+0]>x) {
                  x = a[(LU_IND0+6)*1+0];
                  index = (LU_IND0+6)*1+0;
               }
               if (a[(LU_IND0+7)*1+0]>x) {
                  x = a[(LU_IND0+7)*1+0];
                  index = (LU_IND0+7)*1+0;
               }
l99822:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         chksum = x+(real_t) index;
         dummy(a, b, c, d, e, aa, bb, cc, chksum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return index+x+1;
}
