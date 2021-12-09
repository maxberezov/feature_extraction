real_t s272(struct args_t *func_args)
{
   
   //    control flow
   //    loop with independent conditional
   
   int t = *((int *) func_args->arg_info);

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s272:
            for(i = 0; i <= 31999; i += 1)
               if (e[i]>=t) {
                  a[i] += c[i]*d[i];
                  b[i] += c[i]*c[i];
               }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
