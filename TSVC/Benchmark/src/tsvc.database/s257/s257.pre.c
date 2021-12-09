real_t s257(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    scalar and array expansion
   //    array expansion
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 3899; nl += 1) {
         {
            int i;
            for(i = 1; i <= 255; i += 1) {
               int j;
loop_s257:               LU_NUB0 = 256;
               LU_IB0 = 0;
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  a[i] = aa[LU_IND0*1+0][i]-a[i-1];
                  aa[LU_IND0*1+0][i] = a[i]+bb[LU_IND0*1+0][i];
l99877:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  a[i] = aa[(LU_IND0+0)*1+0][i]-a[i-1];
                  aa[(LU_IND0+0)*1+0][i] = a[i]+bb[(LU_IND0+0)*1+0][i];
                  a[i] = aa[(LU_IND0+1)*1+0][i]-a[i-1];
                  aa[(LU_IND0+1)*1+0][i] = a[i]+bb[(LU_IND0+1)*1+0][i];
                  a[i] = aa[(LU_IND0+2)*1+0][i]-a[i-1];
                  aa[(LU_IND0+2)*1+0][i] = a[i]+bb[(LU_IND0+2)*1+0][i];
                  a[i] = aa[(LU_IND0+3)*1+0][i]-a[i-1];
                  aa[(LU_IND0+3)*1+0][i] = a[i]+bb[(LU_IND0+3)*1+0][i];
                  a[i] = aa[(LU_IND0+4)*1+0][i]-a[i-1];
                  aa[(LU_IND0+4)*1+0][i] = a[i]+bb[(LU_IND0+4)*1+0][i];
                  a[i] = aa[(LU_IND0+5)*1+0][i]-a[i-1];
                  aa[(LU_IND0+5)*1+0][i] = a[i]+bb[(LU_IND0+5)*1+0][i];
                  a[i] = aa[(LU_IND0+6)*1+0][i]-a[i-1];
                  aa[(LU_IND0+6)*1+0][i] = a[i]+bb[(LU_IND0+6)*1+0][i];
                  a[i] = aa[(LU_IND0+7)*1+0][i]-a[i-1];
                  aa[(LU_IND0+7)*1+0][i] = a[i]+bb[(LU_IND0+7)*1+0][i];
l99876:                  ;
               }
               j = 0+MAX0(LU_NUB0, 0)*1;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
