real_t s278(struct args_t *func_args)
{
   
   //    control flow
   //    if/goto to block if-then-else
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s278:
            for(i = 0; i <= 31999; i += 1) {
               if (a[i]>(real_t) 0.) goto L20;
               b[i] = -b[i]+d[i]*e[i];
               goto L30;
L20:               c[i] = -c[i]+d[i]*e[i];
L30:               ;
               a[i] = b[i]+c[i]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
