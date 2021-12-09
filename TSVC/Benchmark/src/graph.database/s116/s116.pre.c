real_t s116(struct args_t *func_args)
{
   
   //    linear dependence testing
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_s116:
            for(i = 0; i <= 31994; i += 5) {
               a[i] = a[i+1]*a[i];
               a[i+1] = a[i+2]*a[i+1];
               a[i+2] = a[i+3]*a[i+2];
               a[i+3] = a[i+4]*a[i+3];
               a[i+4] = a[i+5]*a[i+4];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
