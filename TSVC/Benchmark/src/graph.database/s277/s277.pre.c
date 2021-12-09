real_t s277(struct args_t *func_args)
{
   
   //    control flow
   //    test for dependences arising from guard variable computation.
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s277:
            for(i = 0; i <= 31998; i += 1) {
               if (a[i]>=(real_t) 0.) goto L20;
               if (b[i]>=(real_t) 0.) goto L30;
               a[i] += c[i]*d[i];
L30:               b[i+1] = c[i]+d[i]*e[i];
L20:               ;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
