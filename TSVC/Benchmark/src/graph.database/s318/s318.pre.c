real_t s318(struct args_t *func_args)
{
   
   //    reductions
   //    isamax, max absolute value, increments not equal to 1
   
   int inc = *((int *) func_args->arg_info);

   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int k, index;
   real_t max, chksum;
   {
      int nl;
      for(nl = 0; nl <= 49999; nl += 1) {
         k = 0;
         index = 0;
         max = fabsf(a[0]);
         k += inc;
         {
            int i;
loop_s318:
            for(i = 1; i <= 31999; i += 1) {
               if (fabsf(a[k])<=max) goto L5;
               index = i;
               max = fabsf(a[k]);
L5:               ;
               k += inc;
            }
         }
         chksum = max+(real_t) index;
         dummy(a, b, c, d, e, aa, bb, cc, chksum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return max+index+1;
}
