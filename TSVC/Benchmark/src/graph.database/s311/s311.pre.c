real_t s311(struct args_t *func_args)
{
   
   //    reductions
   //    sum reduction
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   real_t sum;
   {
      int nl;
      for(nl = 0; nl <= 999999; nl += 1) {
         sum = (real_t) 0.;
         {
            int i;
loop_s311:
            for(i = 0; i <= 31999; i += 1)
               sum += a[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, sum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
