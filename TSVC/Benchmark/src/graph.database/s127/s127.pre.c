real_t s127(struct args_t *func_args)
{
   
   //    induction variable recognition
   //    induction variable with multiple increments
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int j;
   {
      int nl;
      for(nl = 0; nl <= 199999; nl += 1) {
         j = -1;
         {
            int i;
loop_s127:
            for(i = 0; i <= 15999; i += 1) {
               j++;
               a[j] = b[i]+c[i]*d[i];
               j++;
               a[j] = b[i]+d[i]*e[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
