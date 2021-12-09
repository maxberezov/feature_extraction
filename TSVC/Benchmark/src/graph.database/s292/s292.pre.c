real_t s292(struct args_t *func_args)
{
   
   //    loop peeling
   //    wrap around variable, 2 levels
   //    similar to S291
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);

   int im1, im2;
   {
      int nl;
      for(nl = 0; nl <= 99999; nl += 1) {
         im1 = 32000-1;
         im2 = 32000-2;
         {
            int i;
loop_s292:
            for(i = 0; i <= 31999; i += 1) {
               a[i] = (b[i]+b[im1]+b[im2])*(real_t) .333;
               im2 = im1;
               im1 = i;
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
