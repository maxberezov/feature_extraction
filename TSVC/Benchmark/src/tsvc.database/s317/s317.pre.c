real_t s317(struct args_t *func_args)
{
   //PIPS generated variable
   int LU_NUB0, LU_IB0, LU_IND0;
   
   //    reductions
   //    product reductio vectorize with
   //    1. scalar expansion of factor, and product reduction
   //    2. closed form solution: q = factor**n
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t q;
   {
      int nl;
      for(nl = 0; nl <= 499999; nl += 1) {
         q = (real_t) 1.;
         {
            int i;
loop_s317:            LU_NUB0 = 16000;
            LU_IB0 = 0;
            for(LU_IND0 = 0; LU_IND0 <= LU_IB0-1; LU_IND0 += 1) {
               q *= (real_t) .99;
l99819:               ;
            }
            for(LU_IND0 = LU_IB0; LU_IND0 <= LU_NUB0-1; LU_IND0 += 8) {
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
               q *= (real_t) .99;
l99818:               ;
            }
            i = 0+MAX0(LU_NUB0, 0)*1;
         }
         dummy(a, b, c, d, e, aa, bb, cc, q);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return q;
}
