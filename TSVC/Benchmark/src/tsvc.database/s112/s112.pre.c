real_t s112(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    linear dependence testing
   //    loop reversal
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 299999; nl += 1) {
         {
            int i;
loop_s112:            LU_NUB0 = 31999;
            LU_IB0 = 7;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*(-1)+(32000-2)+1] = a[LU_IND0*(-1)+(32000-2)]+b[LU_IND0*(-1)+(32000-2)];
l99993:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*(-1)+(32000-2)+1] = a[(LU_IND0+0)*(-1)+(32000-2)]+b[(LU_IND0+0)*(-1)+(32000-2)];
               a[(LU_IND0+1)*(-1)+(32000-2)+1] = a[(LU_IND0+1)*(-1)+(32000-2)]+b[(LU_IND0+1)*(-1)+(32000-2)];
               a[(LU_IND0+2)*(-1)+(32000-2)+1] = a[(LU_IND0+2)*(-1)+(32000-2)]+b[(LU_IND0+2)*(-1)+(32000-2)];
               a[(LU_IND0+3)*(-1)+(32000-2)+1] = a[(LU_IND0+3)*(-1)+(32000-2)]+b[(LU_IND0+3)*(-1)+(32000-2)];
               a[(LU_IND0+4)*(-1)+(32000-2)+1] = a[(LU_IND0+4)*(-1)+(32000-2)]+b[(LU_IND0+4)*(-1)+(32000-2)];
               a[(LU_IND0+5)*(-1)+(32000-2)+1] = a[(LU_IND0+5)*(-1)+(32000-2)]+b[(LU_IND0+5)*(-1)+(32000-2)];
               a[(LU_IND0+6)*(-1)+(32000-2)+1] = a[(LU_IND0+6)*(-1)+(32000-2)]+b[(LU_IND0+6)*(-1)+(32000-2)];
               a[(LU_IND0+7)*(-1)+(32000-2)+1] = a[(LU_IND0+7)*(-1)+(32000-2)]+b[(LU_IND0+7)*(-1)+(32000-2)];
l99992:               ;
            }
            i = 32000-2+MAX0(LU_NUB0, 0)*(-1);
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
