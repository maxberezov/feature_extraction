real_t s232(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    loop interchange
   //    interchanging of triangular loops
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 38999; nl += 1) {
         {
            int j;
            for(j = 1; j <= 255; j += 1) {
               int i;
loop_s232:               LU_NUB0 = (j-1+1)/1;
               LU_IB0 = MOD(LU_NUB0, 8);
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  aa[j][LU_IND0*1+1] = aa[j][LU_IND0*1+1-1]*aa[j][LU_IND0*1+1-1]+bb[j][LU_IND0*1+1];
l99917:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  aa[j][(LU_IND0+0)*1+1] = aa[j][(LU_IND0+0)*1+1-1]*aa[j][(LU_IND0+0)*1+1-1]+bb[j][(LU_IND0+0)*1+1];
                  aa[j][(LU_IND0+1)*1+1] = aa[j][(LU_IND0+1)*1+1-1]*aa[j][(LU_IND0+1)*1+1-1]+bb[j][(LU_IND0+1)*1+1];
                  aa[j][(LU_IND0+2)*1+1] = aa[j][(LU_IND0+2)*1+1-1]*aa[j][(LU_IND0+2)*1+1-1]+bb[j][(LU_IND0+2)*1+1];
                  aa[j][(LU_IND0+3)*1+1] = aa[j][(LU_IND0+3)*1+1-1]*aa[j][(LU_IND0+3)*1+1-1]+bb[j][(LU_IND0+3)*1+1];
                  aa[j][(LU_IND0+4)*1+1] = aa[j][(LU_IND0+4)*1+1-1]*aa[j][(LU_IND0+4)*1+1-1]+bb[j][(LU_IND0+4)*1+1];
                  aa[j][(LU_IND0+5)*1+1] = aa[j][(LU_IND0+5)*1+1-1]*aa[j][(LU_IND0+5)*1+1-1]+bb[j][(LU_IND0+5)*1+1];
                  aa[j][(LU_IND0+6)*1+1] = aa[j][(LU_IND0+6)*1+1-1]*aa[j][(LU_IND0+6)*1+1-1]+bb[j][(LU_IND0+6)*1+1];
                  aa[j][(LU_IND0+7)*1+1] = aa[j][(LU_IND0+7)*1+1-1]*aa[j][(LU_IND0+7)*1+1-1]+bb[j][(LU_IND0+7)*1+1];
l99916:                  ;
               }
               i = 1+MAX0(LU_NUB0, 0)*1;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
