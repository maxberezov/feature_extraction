real_t s313(struct args_t *func_args)
{
   
   //    reductions
   //    dot product
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t dot;
   {
      int nl;
      for(nl = 0; nl <= 499999; nl += 1) {
         dot = (real_t) 0.;
         {
            int i;
loop_s313:
            for(i = 0; i <= 31999; i += 1)
               dot += a[i]*b[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, dot);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return dot;
}
