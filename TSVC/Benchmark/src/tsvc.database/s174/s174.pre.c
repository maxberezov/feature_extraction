real_t s174(struct args_t *func_args)
{
   
   //    symbolics
   //    loop with subscript that may seem ambiguous
   
   int M = *((int *) func_args->arg_info);
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_s174:            LU_NUB0 = (M-1-0+1)/1;
            LU_IB0 = MOD(LU_NUB0, 8);
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*1+0+M] = a[LU_IND0*1+0]+b[LU_IND0*1+0];
l99937:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*1+0+M] = a[(LU_IND0+0)*1+0]+b[(LU_IND0+0)*1+0];
               a[(LU_IND0+1)*1+0+M] = a[(LU_IND0+1)*1+0]+b[(LU_IND0+1)*1+0];
               a[(LU_IND0+2)*1+0+M] = a[(LU_IND0+2)*1+0]+b[(LU_IND0+2)*1+0];
               a[(LU_IND0+3)*1+0+M] = a[(LU_IND0+3)*1+0]+b[(LU_IND0+3)*1+0];
               a[(LU_IND0+4)*1+0+M] = a[(LU_IND0+4)*1+0]+b[(LU_IND0+4)*1+0];
               a[(LU_IND0+5)*1+0+M] = a[(LU_IND0+5)*1+0]+b[(LU_IND0+5)*1+0];
               a[(LU_IND0+6)*1+0+M] = a[(LU_IND0+6)*1+0]+b[(LU_IND0+6)*1+0];
               a[(LU_IND0+7)*1+0+M] = a[(LU_IND0+7)*1+0]+b[(LU_IND0+7)*1+0];
l99936:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
