real_t s276(struct args_t *func_args)
{
   
   //    control flow
   //    if test using loop index
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int mid = 32000/2;
   {
      int nl;
      for(nl = 0; nl <= 399999; nl += 1) {
         {
            int i;
loop_s276:
            for(i = 0; i <= 31999; i += 1)
               if (i+1<mid)
                  a[i] += b[i]*c[i];
               else
                  a[i] += b[i]*d[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
