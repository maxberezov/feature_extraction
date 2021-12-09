real_t s253(struct args_t *func_args)
{
   
   //    scalar and array expansion
   //    scalar expansio assigned under if
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t s;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s253:
            for(i = 0; i <= 31999; i += 1)
               if (a[i]>b[i]) {
                  s = a[i]-b[i]*d[i];
                  c[i] += s;
                  a[i] = s;
               }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
