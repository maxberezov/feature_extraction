real_t s211(struct args_t *func_args)
{
   
   //    statement reordering
   //    statement reordering allows vectorization
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s211:
            for(i = 1; i <= 31998; i += 1) {
               a[i] = b[i-1]+c[i]*d[i];
               b[i] = b[i+1]-e[i]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
