real_t s115(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    linear dependence testing
   //    triangular saxpy loop
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 389999; nl += 1) {
         {
            int j;
            for(j = 0; j <= 255; j += 1) {
               int i;
loop_s115:               LU_NUB0 = (255-(j+1)+1)/1;
               LU_IB0 = MOD(LU_NUB0, 8);
               for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
                  a[LU_IND0*1+(j+1)] -= aa[j][LU_IND0*1+(j+1)]*a[j];
l99983:                  ;
               }
               for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
                  a[(LU_IND0+0)*1+(j+1)] -= aa[j][(LU_IND0+0)*1+(j+1)]*a[j];
                  a[(LU_IND0+1)*1+(j+1)] -= aa[j][(LU_IND0+1)*1+(j+1)]*a[j];
                  a[(LU_IND0+2)*1+(j+1)] -= aa[j][(LU_IND0+2)*1+(j+1)]*a[j];
                  a[(LU_IND0+3)*1+(j+1)] -= aa[j][(LU_IND0+3)*1+(j+1)]*a[j];
                  a[(LU_IND0+4)*1+(j+1)] -= aa[j][(LU_IND0+4)*1+(j+1)]*a[j];
                  a[(LU_IND0+5)*1+(j+1)] -= aa[j][(LU_IND0+5)*1+(j+1)]*a[j];
                  a[(LU_IND0+6)*1+(j+1)] -= aa[j][(LU_IND0+6)*1+(j+1)]*a[j];
                  a[(LU_IND0+7)*1+(j+1)] -= aa[j][(LU_IND0+7)*1+(j+1)]*a[j];
l99982:                  ;
               }
               i = j+1+MAX0(LU_NUB0, 0)*1;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
