real_t s254(struct args_t *func_args)
{
   
   //    scalar and array expansion
   //    carry around variable
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t x;
   {
      int nl;
      for(nl = 0; nl <= 399999; nl += 1) {
         x = b[32000-1];
         {
            int i;
loop_s254:
            for(i = 0; i <= 31999; i += 1) {
               a[i] = (b[i]+x)*(real_t) .5;
               x = b[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
