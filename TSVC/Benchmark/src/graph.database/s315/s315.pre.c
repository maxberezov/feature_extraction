real_t s315(struct args_t *func_args)
{
   
   //    reductions
   //    if to max with index reductio 1 dimension
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int i;

      for(i = 0; i <= 31999; i += 1)
         a[i] = i*7%32000;
   }

   real_t x, chksum;
   int index;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         x = a[0];
         index = 0;
         {
            int i;
loop_s315:
            for(i = 0; i <= 31999; i += 1)
               if (a[i]>x) {
                  x = a[i];
                  index = i;
               }
         }
         chksum = x+(real_t) index;
         dummy(a, b, c, d, e, aa, bb, cc, chksum);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return index+x+1;
}
