real_t s312(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    product reduction
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t prod;
   {
      int nl;
      for(nl = 0; nl <= 999999; nl += 1) {
         prod = (real_t) 1.;
         {
            int i;
loop_s312:            LU_NUB0 = 32000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               prod *= a[LU_IND0*1+0];
l99829:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               prod *= a[(LU_IND0+0)*1+0];
               prod *= a[(LU_IND0+1)*1+0];
               prod *= a[(LU_IND0+2)*1+0];
               prod *= a[(LU_IND0+3)*1+0];
               prod *= a[(LU_IND0+4)*1+0];
               prod *= a[(LU_IND0+5)*1+0];
               prod *= a[(LU_IND0+6)*1+0];
               prod *= a[(LU_IND0+7)*1+0];
l99828:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, prod);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return prod;
}
