real_t s1213(struct args_t *func_args)
{
   
   //    statement reordering
   //    dependency needing temporary
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s1213:
            for(i = 1; i <= 31998; i += 1) {
               a[i] = b[i-1]+c[i];
               b[i] = a[i+1]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
