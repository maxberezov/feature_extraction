real_t s2710(struct args_t *func_args)
{
   
   //    control flow
   //    scalar and vector ifs
   
   int x = *((int *) func_args->arg_info);

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 49999; nl += 1) {
         {
            int i;
loop_s2710:
            for(i = 0; i <= 31999; i += 1)
               if (a[i]>b[i]) {
                  a[i] += b[i]*d[i];
                  if (32000>10)
                     c[i] += d[i]*d[i];
                  else
                     c[i] = d[i]*e[i]+(real_t) 1.;
               }
               else {
                  b[i] = a[i]+e[i]*e[i];
                  if (x>(real_t) 0.)
                     c[i] = a[i]+d[i]*d[i];
                  else
                     c[i] += e[i]*e[i];
               }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
