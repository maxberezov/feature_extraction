real_t s175(struct args_t *func_args)
{
   
   //    symbolics
   //    symbolic dependence tests
   
   int inc = *((int *) func_args->arg_info);

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

loop_s175:
      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
            i = 0;
            while (i<32000-1) {
               a[i] = a[i+inc]+b[i];
               i += inc;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
