real_t s273(struct args_t *func_args)
{
   
   //    control flow
   //    simple loop with dependent conditional
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s273:
            for(i = 0; i <= 31999; i += 1) {
               a[i] += d[i]*e[i];
               if (a[i]<(real_t) 0.)
                  b[i] += d[i]*e[i];
               c[i] += a[i]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
