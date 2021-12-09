real_t s317(struct args_t *func_args)
{
   
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
loop_s317:
            for(i = 0; i <= 15999; i += 1)
               q *= (real_t) .99;
         }
         dummy(a, b, c, d, e, aa, bb, cc, q);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return q;
}
