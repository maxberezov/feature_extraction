real_t s173(struct args_t *func_args)
{
   //    symbolics
   //    expression in loop bounds and subscripts
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k = 32000/2;
   {
      int nl;
      for(nl = 0; nl <= 999999; nl += 1) {
         {
            int i;
loop_s173:
            for(i = 0; i <= 15999; i += 1)
               a[i+k] = a[i]+b[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
