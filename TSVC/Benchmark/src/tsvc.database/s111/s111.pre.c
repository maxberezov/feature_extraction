real_t s111(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    linear dependence testing
   //    no dependence - vectorizable
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 199999; nl += 1) {
         {
            int i;
loop_s111:            LU_NUB0 = 16000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               a[LU_IND0*2+1] = a[LU_IND0*2+1-1]+b[LU_IND0*2+1];
l99997:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               a[(LU_IND0+0)*2+1] = a[(LU_IND0+0)*2+1-1]+b[(LU_IND0+0)*2+1];
               a[(LU_IND0+1)*2+1] = a[(LU_IND0+1)*2+1-1]+b[(LU_IND0+1)*2+1];
               a[(LU_IND0+2)*2+1] = a[(LU_IND0+2)*2+1-1]+b[(LU_IND0+2)*2+1];
               a[(LU_IND0+3)*2+1] = a[(LU_IND0+3)*2+1-1]+b[(LU_IND0+3)*2+1];
               a[(LU_IND0+4)*2+1] = a[(LU_IND0+4)*2+1-1]+b[(LU_IND0+4)*2+1];
               a[(LU_IND0+5)*2+1] = a[(LU_IND0+5)*2+1-1]+b[(LU_IND0+5)*2+1];
               a[(LU_IND0+6)*2+1] = a[(LU_IND0+6)*2+1-1]+b[(LU_IND0+6)*2+1];
               a[(LU_IND0+7)*2+1] = a[(LU_IND0+7)*2+1-1]+b[(LU_IND0+7)*2+1];
l99996:               ;
            }
            i = 1+MAX0(LU_NUB0, 0)*2;
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
