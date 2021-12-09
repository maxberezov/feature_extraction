real_t vpv(struct args_t *func_args)
{
   
   //    control loops
   //    vector plus vector
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_vpv:
            for(i = 0; i <= 31999; i += 1)
               a[i] += b[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
