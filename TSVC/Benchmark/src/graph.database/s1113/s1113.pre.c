real_t s1113(struct args_t *func_args)
{
   
   //    linear dependence testing
   //    one iteration dependency on a(LEN_1D/2) but still vectorizable
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 199999; nl += 1) {
         {
            int i;
loop_s1113:
            for(i = 0; i <= 31999; i += 1)
               a[i] = a[32000/2]+b[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
