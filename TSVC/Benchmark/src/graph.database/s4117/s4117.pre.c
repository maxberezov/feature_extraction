real_t s4117(struct args_t *func_args)
{
   
   //    indirect addressing
   //    seq function
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s4117:
            for(i = 0; i <= 31999; i += 1)
               a[i] = b[i]+c[i/2]*d[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
