real_t s13110(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    if to max with index reductio 2 dimensions
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int xindex, yindex;
   real_t max, chksum;
   {
      int nl;
      for(nl = 0; nl <= 38999; nl += 1) {
         max = aa[0][0];
         xindex = 0;
         yindex = 0;
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               int j;
loop_s13110:               LU_NUB0 = 256;
               LU_IB0 = 0;
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  if (aa[i][LU_IND0*1+0]>max) {
                     max = aa[i][LU_IND0*1+0];
                     xindex = i;
                     yindex = LU_IND0*1+0;
                  }
l99813:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  if (aa[i][(LU_IND0+0)*1+0]>max) {
                     max = aa[i][(LU_IND0+0)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+0)*1+0;
                  }
                  if (aa[i][(LU_IND0+1)*1+0]>max) {
                     max = aa[i][(LU_IND0+1)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+1)*1+0;
                  }
                  if (aa[i][(LU_IND0+2)*1+0]>max) {
                     max = aa[i][(LU_IND0+2)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+2)*1+0;
                  }
                  if (aa[i][(LU_IND0+3)*1+0]>max) {
                     max = aa[i][(LU_IND0+3)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+3)*1+0;
                  }
                  if (aa[i][(LU_IND0+4)*1+0]>max) {
                     max = aa[i][(LU_IND0+4)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+4)*1+0;
                  }
                  if (aa[i][(LU_IND0+5)*1+0]>max) {
                     max = aa[i][(LU_IND0+5)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+5)*1+0;
                  }
                  if (aa[i][(LU_IND0+6)*1+0]>max) {
                     max = aa[i][(LU_IND0+6)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+6)*1+0;
                  }
                  if (aa[i][(LU_IND0+7)*1+0]>max) {
                     max = aa[i][(LU_IND0+7)*1+0];
                     xindex = i;
                     yindex = (LU_IND0+7)*1+0;
                  }
l99812:                  ;
               }
               j = 0+MAX0(LU_NUB0, 0)*1;
            }
         }
         chksum = max+(real_t) xindex+(real_t) yindex;
         dummy(a, b, c, d, e, aa, bb, cc, chksum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return max+xindex+1+yindex+1;
}
