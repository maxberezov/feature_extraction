real_t s261(struct args_t *func_args)
{
   
   //    scalar and array expansion
   //    wrap-around scalar under an if
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t t;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s261:
            for(i = 1; i <= 31999; i += 1) {
               t = a[i]+b[i];
               a[i] = t+c[i-1];
               t = c[i]*d[i];
               c[i] = t;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
