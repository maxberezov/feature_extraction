real_t s241(struct args_t *func_args)
{
   
   //    node splitting
   //    preloading necessary to allow vectorization
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 199999; nl += 1) {
         {
            int i;
loop_s241:
            for(i = 0; i <= 31998; i += 1) {
               a[i] = b[i]*c[i]*d[i];
               b[i] = a[i]*a[i+1]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
