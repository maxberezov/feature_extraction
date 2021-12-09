real_t s2275(struct args_t *func_args)
{
   
   //    loop distribution is needed to be able to interchange
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 38999; nl += 1) {
         {
            int i;
            for(i = 0; i <= 255; i += 1) {
               {
                  int j;
loop_s2275:
                  for(j = 0; j <= 255; j += 1)
                     aa[j][i] = aa[j][i]+bb[j][i]*cc[j][i];
               }
               a[i] = b[i]+c[i]*d[i];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
