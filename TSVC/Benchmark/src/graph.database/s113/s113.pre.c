real_t s113(struct args_t *func_args)
{
   
   //    linear dependence testing
   //    a(i)=a(1) but no actual dependence cycle
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 399999; nl += 1) {
         {
            int i;
loop_s113:
            for(i = 1; i <= 31999; i += 1)
               a[i] = a[0]+b[i];
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
