real_t s1244(struct args_t *func_args)
{
   
   //    node splitting
   //    cycle with ture and anti dependency
   
   initialise_arrays(__func__);
   gettimeofday(&func_args->t1, (void *) 0);
   {
      int nl;

      for(nl = 0; nl <= 99999; nl += 1) {
         {
            int i;
loop_s1244:
            for(i = 0; i <= 31998; i += 1) {
               a[i] = b[i]+c[i]*c[i]+b[i]*b[i]+c[i];
               d[i] = a[i]+a[i+1];
            }
         }
         dummy(a, b, c, d, e, aa, bb, cc, 0.);
      }
   }

   gettimeofday(&func_args->t2, (void *) 0);
   return calc_checksum(__func__);
}
