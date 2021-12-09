real_t s128(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    induction variables
   //    coupled induction variables
   //    jump in data access
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j, k;
   {
      int nl;
      for(nl = 0; nl <= 199999; nl += 1) {
         j = -1;
         {
            int i;
loop_s128:            LU_NUB0 = 16000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               k = j+1;
               a[LU_IND0*1+0] = b[k]-d[LU_IND0*1+0];
               j = k+1;
               b[k] = a[LU_IND0*1+0]+c[k];
l99957:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               k = j+1;
               a[(LU_IND0+0)*1+0] = b[k]-d[(LU_IND0+0)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+0)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+1)*1+0] = b[k]-d[(LU_IND0+1)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+1)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+2)*1+0] = b[k]-d[(LU_IND0+2)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+2)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+3)*1+0] = b[k]-d[(LU_IND0+3)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+3)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+4)*1+0] = b[k]-d[(LU_IND0+4)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+4)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+5)*1+0] = b[k]-d[(LU_IND0+5)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+5)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+6)*1+0] = b[k]-d[(LU_IND0+6)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+6)*1+0]+c[k];
               k = j+1;
               a[(LU_IND0+7)*1+0] = b[k]-d[(LU_IND0+7)*1+0];
               j = k+1;
               b[k] = a[(LU_IND0+7)*1+0]+c[k];
l99956:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 1.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
